#ifndef BOWLING_HAME_HPP
#define BOWLING_HAME_HPP

class Game
{
public:
  Game() : totalScore(0), currentRoll(0) {}

  void roll(int pins) {
    totalScore += pins;
    rolls[currentRoll++] = pins;
  }

  int score() {
    return totalScore;
  }
private:
  int totalScore;
  int rolls[21];
  int currentRoll;
};

#endif //BOWLING_HAME_HPP
