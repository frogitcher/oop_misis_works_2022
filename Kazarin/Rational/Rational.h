#include <iosfwd>

class Rational {
public:
  Rational(int, int);
  Rational(int);
  Rational();

  Rational FlipNumber() const;

  Rational operator+(const Rational&) const;
  Rational operator-(const Rational&) const;
  Rational operator*(const Rational&) const;
  Rational operator/(const Rational&) const;

  friend std::istream& operator>>(std::istream&, Rational&);
  friend std::ostream& operator<<(std::ostream&, const Rational&);

private:
  int num, den;
};
