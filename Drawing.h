#pragma once
#include "Shape.h"
#include <vector>
using namespace std;

class Drawing {
private:
    vector<Shape*> shapes;
public:
    void addShape(Shape* shape);
    double totalArea();
};