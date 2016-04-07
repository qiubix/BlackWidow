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
    int i = 0;
    for (int frame = 0; frame < 10; ++frame) {
      totalScore += rolls[i] + rolls[i+1];
      i += 2;
    }
    return totalScore;
  }

private:
  int currentRoll = 0;
  int rolls[21] = {};
};

#endif //BOWLING_HAME_HPP
