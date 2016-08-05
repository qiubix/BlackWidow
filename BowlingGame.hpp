#ifndef BOWLING_HAME_HPP
#define BOWLING_HAME_HPP

class Game
{
public:
  void roll(int pins) {
    rolls[currentRoll] = pins;
    ++currentRoll;
  }

  int score() {
    int totalScore = 0;
    int rollIndex = 0;
    for (int frame = 0; frame < 10; frame++) {
      if (isSpare(rollIndex)) {
        totalScore += 10 + spareBonus(rollIndex);
      }
      else {
        totalScore += frameTotal(rollIndex);
      }
      rollIndex += 2;
    }
    return totalScore;
  }

private:
  int rolls[21] = {};
  int currentRoll = 0;

  bool isSpare(int rollIndex) {
    return rolls[rollIndex] + rolls[rollIndex+1] == 10;
  }

  int frameTotal(int rollIndex) {
    return rolls[rollIndex] + rolls[rollIndex+1];
  }

  int spareBonus(int rollIndex) {
    return rolls[rollIndex+2];
  }
};

#endif //BOWLING_HAME_HPP
