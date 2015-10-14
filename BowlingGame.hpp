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
      if (rolls[frameIndex] == 10) { //strike
        totalScore += 10 + strikeBonus(frameIndex);
        frameIndex++;
      }
      else if (isSpare(frameIndex)) {
        totalScore += 10 + spareBonus(frameIndex);
        frameIndex += 2;
      }
      else {
        totalScore += sumOfBallsInFrame(frameIndex);
        frameIndex += 2;
      }
    }
    return totalScore;
  }

private:
  int rolls[21] = {};
  int currentRoll = 0;

  bool isSpare(int frameIndex) {
    return rolls[frameIndex] + rolls[frameIndex+1] == 10;
  }

  int strikeBonus(int frameIndex) {
    return rolls[frameIndex + 1] + rolls[frameIndex + 2];
  }

  int spareBonus(int frameIndex) {
    return rolls[frameIndex+2];
  }

  int sumOfBallsInFrame(int frameIndex) {
    return rolls[frameIndex] + rolls[frameIndex+1];
  }
};

#endif //BOWLING_HAME_HPP
