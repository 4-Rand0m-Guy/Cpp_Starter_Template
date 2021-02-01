#ifndef PLAYER_HPP
#define PLAYER_HPP

#include <string>

class Player {
 private:
  static int num_players;

  std::string name;
  int health;
  int xp;

 public:
  /*
    Overload examples
  */
  Player();

  Player(std::string name_v);

  Player(std::string name_v, int health_v, int xp_v);

  // Becomes default constructor, cannot overload
  // Player(std::string name_v = "None", int health_v = 0, int xp_v = 0);

  /*
    Copy constructor
  */
  Player(const Player &source);

  /*
    Destructor
  */
  ~Player();

  /**
   * @brief Get the num players. Static method that returns static data
   * 
   * @return int num players
   */
  static int get_num_players();

  /**
   * @brief Function to output the values of Player to stdout
   *  
   */
  void print_player() const;

  std::string get_name() const;

  int get_health() const;

  int get_xp() const;

  void set_name(std::string name_v);
};

#endif  //PLAYER_HPP