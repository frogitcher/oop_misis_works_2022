#include <iostream>

struct Vec2d {

private:
    double x_;
    double y_;

public:
    Vec2d(double x = 0.0, double y = 0.0)
        : x_{x}
        , y_{y}{}

    ~Vec2d() = default;

    double GetX() {
        return x_;
    }

    double GetY() {
        return y_;
    }

    Vec2d Vec2d::operator+ (const Vec2d& rhs) const{
        int x = GetX() + rhs.GetX();
        int y = GetY() + rhs.GetY();
        return Vec2d(x, y);
     }

    Vec2d Vec2d::operator- (const Vec2d& rhs) const {
        int x = GetX() - rhs.GetX();
        int y = GetY() - rhs.GetY();

    }

    Vec2d& Vec2d::operator= (const Vec2d& rhs) {
        x_ = rhs.GetX();
        y_ = rhs.GetY();
        return *this;
    }

    double Vec2d::GetLength(const Vec2d& vec) const {
        return sqrt(vec.GetX() * vec.GetX + vec.GetY() * vec.GetY());
    }

};

double Vec2d::DotProduct(const Vec2d& vec_1, const Vec2d& vec_2) const {
    return vec_1.GetX() * vec_2.GetX() + vec_1.GetY() * vec_2.GetY();
}

Vec2d Vec2d::CrossProduct(const Vec2d& vec_1, const Vec2d& vec_2) const {
    return Vec2d(vec_1.GetX() * vec_2.GetY(), -1 * vec_1.GetY() * vec_2.GetX());
}