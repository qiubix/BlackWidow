#include "gmock/gmock.h"
#include "BowlingGame.hpp"

using namespace testing;

class BowlingGameTest : public Test {
public:
  Game game;
};

TEST_F(BowlingGameTest, testGutterGame) {
  int pins = 0;
  int n = 20;
  for (int i = 0; i < n; i++) {
    game.roll(pins);
  }
  ASSERT_THAT(game.score(), Eq(0));
}

TEST_F(BowlingGameTest, testAllOnes) {
  for (int i = 0; i < 20; i++) {
    game.roll(1);
  }
  ASSERT_THAT(game.score(), Eq(20));
}
