#include <iostream>

class Brusok {
private:
  int len_, width_, height_, weight_;

public:
  Brusok(int len = 1, int width = 1, int height = 1, int weight = 1)
    : len_{ len }
    , width_{ width }
    , height_{ height }
    , weight_{ weight } {}
  Brusok(const Brusok& other) {
    len_ = other.GetLength();
    width_ = other.GetWidth();
    height_ = other.GetHeight();
    weight_ = other.GetWeight();
  }
  ~Brusok() = default;

  Brusok operator=(const Brusok& lhs) {
    return { *this=(lhs.GetLength(), lhs.GetWidth(), lhs.GetHeight(), lhs.GetWeight()) };
  }

  int GetVolume() const { return len_ * width_ * height_; }
  double GetDensity() const { return weight_ / GetVolume(); }
  int GetLength() const { return len_; }
  int GetWidth() const { return width_; }
  int GetHeight() const { return height_; }
  int GetWeight() const { return weight_; }

  int SetLength(int num) { return len_ = num; }
  int SetWidth(int num) { return width_ = num; }
  int SetHeight(int num) { return height_ = num; }
  int SetWeight(int num) { return weight_ = num; }
};
