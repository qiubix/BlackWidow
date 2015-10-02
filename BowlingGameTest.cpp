#include "gmock/gmock.h"
#include "BowlingGame.hpp"
using ::testing::Eq;

TEST(BowlingGame, testGutterGame) {
  Game game;
  for (int i = 0; i < 20; i++) {
    game.roll(0);
  }
  ASSERT_THAT(game.score(), Eq(0));
}
