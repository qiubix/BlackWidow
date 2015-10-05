#include "gmock/gmock.h"
#include "BowlingGame.hpp"

using namespace testing;

class BowlingGameTest : public Test {
public:
  Game game;
};

TEST_F(BowlingGameTest, testGutterGame) {
  for (int i = 0; i < 20; i++) {
    game.roll(0);
  }
  ASSERT_THAT(game.score(), Eq(0));
}

TEST_F(BowlingGameTest, testAllOnes) {
  for (int i = 0; i < 20; i++) {
    game.roll(1);
  }
  ASSERT_THAT(game.score(), Eq(20));
}
