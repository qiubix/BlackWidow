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
    for (int frame = 0; frame < 10; ++frame) {
      if (rolls[frameIndex] == 10) { //strike
        totalScore += 10 + rolls[frameIndex+1] + rolls[frameIndex+2];
        frameIndex++;
      }
      else if (isSpare(frameIndex)) {
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
  int currentRoll = 0;
  int rolls[21] = {};

  bool isSpare(int frameIndex) const {
    return rolls[frameIndex] + rolls[frameIndex + 1] == 10;
  }
};

#endif //BOWLING_HAME_HPP
