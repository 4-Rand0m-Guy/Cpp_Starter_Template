#include "Player.hpp"

#include <iostream>
#include <utility>

/*
  Need to initialize static members in the cpp
*/
int Player::num_players{0};

/*
  Overload examples
*/
Player::Player()
    : Player{"None", 0, 0} {
  std::cout << "Default constructor for: " << name << std::endl;
}

Player::Player(std::string name_v)
    : Player{std::move(name_v), 0, 0} {
  std::cout << "One arg constructor for: " << name << std::endl;
}

Player::Player(std::string name_v, int health_v, int xp_v)
    : name{std::move(name_v)},
      health{health_v},
      xp{xp_v} {
  std::cout << "Three arg constructor for: " << name << std::endl;
  num_players++;
}

/*
  Copy constructor
*/
Player::Player(const Player &source)
    : name{source.name},
      health{source.health},
      xp{source.xp} {
  std::cout << "Made a copy of: " << source.name << std::endl;
}

/*
  Destructor
*/
Player::~Player() {
  std::cout << "Destructor called for: " << name << std::endl;
  num_players--;
}

int Player::get_num_players() {
  return num_players;
}

void Player::print_player() const {
  std::cout << "Name: " << name << std::endl;
  std::cout << "Health: " << health << std::endl;
  std::cout << "XP: " << xp << std::endl;
}

std::string Player::get_name() const {
  return name;
}

int Player::get_health() const {
  return health;
}

int Player::get_xp() const {
  return xp;
}

void Player::set_name(std::string name_v) {
  name = std::move(name_v);
}
