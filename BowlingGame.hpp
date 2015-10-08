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
    for (int i = 0; i < 21; i++) {
      totalScore += rolls[i];
    }
    return totalScore;
  }

private:
  int rolls[21] = {};
  int currentRoll = 0;
};

#endif //BOWLING_HAME_HPP
