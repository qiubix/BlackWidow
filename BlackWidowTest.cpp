#include "gmock/gmock.h"
using ::testing::Eq;

TEST(BowlingGameScoringMachine, DoesNothing) {
  ASSERT_THAT(0, Eq(0));
}
