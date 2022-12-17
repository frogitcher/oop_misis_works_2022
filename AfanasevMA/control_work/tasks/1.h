#ifndef AFANASEV_CONTROL_WORK_1_H
#define AFANASEV_CONTROL_WORK_1_H

class WoodenSomething {
public:
    WoodenSomething(double length, double width, double height, double weight);

    WoodenSomething();

    WoodenSomething& operator=(const WoodenSomething &other);

    ~WoodenSomething();

    double GetVolume() const;

    double GetDensity() const;

    double GetLength() const;

    double GetWidth() const;

    double GetHeight() const;

    double GetWeight() const;

    void SetLength(double x);

    void SetWidth(double x);

    void SetHeight(double x);

    void SetWeight(double x);

private:
    double _length;
    double _width;
    double _height;
    double _weight;
};

#endif
