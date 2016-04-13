#ifndef BOWLING_HAME_HPP
#define BOWLING_HAME_HPP

class Game
{
public:
  void roll(int pins) {
    rolls[currentRoll++] = pins;
  }

  int score() {
    int totalScore = 0;
    for (int i = 0; i < 21; ++i) {
      if (i >= 2 && rolls[i-2] + rolls[i-1] == 10) {
        totalScore += 2 * rolls[i];
      }
      else {
        totalScore += rolls[i];
      }
    }
    return totalScore;
  }

private:
  int currentRoll = 0;
  int rolls[21] = {};
};

#endif //BOWLING_HAME_HPP
