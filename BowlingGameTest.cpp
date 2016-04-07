#include "gmock/gmock.h"
#include "BowlingGame.hpp"

using namespace testing;


TEST(BowlingGameTest, testGutterGame) {
  Game game;
  for (int i = 0; i < 20; ++i) {
    game.roll(0);
  }
  ASSERT_THAT(game.score(), Eq(0));
}
