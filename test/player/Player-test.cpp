#include <player/Player.hpp>
#include <gtest/gtest.h>
#include <string>

TEST(PlayerTest, test1) {
    //arrange
    //act
    //assert
    std::string name{"Vernboss"};
    Player vernon{name};

    EXPECT_EQ(vernon.get_name(), name);
}
