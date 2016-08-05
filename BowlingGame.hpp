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
    int currentRoll = 0;
    for (int frame = 0; frame < 10; frame++) {
      if (rolls[currentRoll] + rolls[currentRoll+1] == 10) { //spare
        totalScore += rolls[currentRoll] + rolls[currentRoll+1] + rolls[currentRoll+2];
      }
      else {
        totalScore += rolls[currentRoll] + rolls[currentRoll+1];
      }
      currentRoll += 2;
    }
    return totalScore;
  }

private:
  int rolls[21] = {};
  int currentRoll = 0;
};

#endif //BOWLING_HAME_HPP
