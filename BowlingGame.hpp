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
    int frameIndex = 0;
    for (int frame = 0; frame < 10; frame++) {
      if (rolls[frameIndex] + rolls[frameIndex+1] == 10) { //spare
        totalScore += 10 + rolls[frameIndex+2];
        frameIndex += 2;
      }
      else {
        totalScore += rolls[frameIndex] + rolls[frameIndex+1];
        frameIndex += 2;
      }
    }
    return totalScore;
  }

private:
  int rolls[21] = {};
  int currentRoll = 0;
};

#endif //BOWLING_HAME_HPP
