#pragma once
#include "Shape.h"

class Rectangle 
    : public Shape {
private:
    double width, height;
public:
    Rectangle(double w, double h);
    double area() override;
};