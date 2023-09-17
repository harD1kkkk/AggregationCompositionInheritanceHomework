#pragma once
#include "Drawing.h"

class Building {
private:
    Drawing drawing;
public:
    void addFloor(Shape* shape);
    double totalBuildingArea();
};