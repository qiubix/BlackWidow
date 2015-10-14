#include "gmock/gmock.h"
#include "BowlingGame.hpp"

using namespace testing;

class BowlingGameTest : public Test {
public:
  Game game;
  void rollMany(int n, int pins) {
    for (int i = 0; i < n; i++) {
      game.roll(pins);
    }
  }
  void rollSpare() {
    game.roll(5);
    game.roll(5);
  }
};

TEST_F(BowlingGameTest, testGutterGame) {
  rollMany(20, 0);
  ASSERT_THAT(game.score(), Eq(0));
}

TEST_F(BowlingGameTest, testAllOnes) {
  rollMany(20, 1);
  ASSERT_THAT(game.score(), Eq(20));
}

TEST_F(BowlingGameTest, testOneSpare) {
  rollSpare();
  game.roll(3);
  rollMany(17,0);
  ASSERT_THAT(game.score(), Eq(16));
}
