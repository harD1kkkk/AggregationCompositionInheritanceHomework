// zavd_84.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Circle.h"
#include "Rectangle.h"
#include "Triangle.h"
#include "Drawing.h"
#include "Building.h"

using namespace std;

int main() {
    Drawing drawing;
    Building building;
    int choice;
    double param1, param2;

    while (true) {
        cout << "\n1. Add Circle to Drawing\n";
        cout << "2. Add Rectangle to Drawing\n";
        cout << "3. Add Triangle to Drawing\n";
        cout << "4. Add Floor to Building\n";
        cout << "5. Calculate Total Drawing Area\n";
        cout << "6. Calculate Total Building Area\n";
        cout << "7. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1) {
            cout << "Enter radius: ";
            cin >> param1;
            drawing.addShape(new Circle(param1));
        }

        else if (choice == 2) {
            cout << "Enter width and height: ";
            cin >> param1 >> param2;
            drawing.addShape(new Rectangle(param1, param2));
        }

        else if (choice == 3) {
            cout << "Enter base and height: ";
            cin >> param1 >> param2;
            drawing.addShape(new Triangle(param1, param2));
        }

        else if (choice == 4) {
            cout << "Enter radius for circular floor: ";
            cin >> param1;
            building.addFloor(new Circle(param1));
        }

        else if (choice == 5) {
            cout << "Total Drawing Area: " << drawing.totalArea() << endl;
        }

        else if (choice == 6) {
            cout << "Total Building Area: " << building.totalBuildingArea() << endl;
        }

        else if (choice == 7) {
            return 0;
        }

        else {
            cout << "Invalid choice. Please try again.\n";
        }
    }
}