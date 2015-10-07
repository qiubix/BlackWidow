#ifndef BOWLING_HAME_HPP
#define BOWLING_HAME_HPP

class Game
{
public:
  Game() : totalScore(0) {}

  //TODO: fix design
  void roll(int pins) {
    totalScore += pins;
  }

  int score() {
    return totalScore;
  }
private:
  int totalScore;
};

#endif //BOWLING_HAME_HPP
