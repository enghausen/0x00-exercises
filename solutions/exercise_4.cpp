#include <iostream>
#include "geometrics.h"

using namespace std;

int main() {
    int choice;
    
    cout << "Choose shape to calculate:\n";
    cout << "1. Sphere\n";
    cout << "2. Rectangular Box\n";
    cout << "Enter choice (1 or 2): ";
    cin >> choice;

    if (choice == 1) {
        double radius;
        cout << "Enter the radius: ";
        cin >> radius;

        cout << "\nResults for Sphere:\n";
        cout << "   - Volume: " << volume(radius) << " cubic units\n";
        cout << "   - Surface Area: " << area(radius) << " square units\n";
        cout << "   - Area-to-Volume Ratio: " << ratio(radius) << endl;
    } 
    else if (choice == 2) {
        double height, width, length;
        cout << "Enter the height: ";
        cin >> height;
        cout << "Enter the width: ";
        cin >> width;
        cout << "Enter the length: ";
        cin >> length;

        cout << "\nResults for Rectangular Box:\n";
        cout << "   - Volume: " << volume(height, width, length) << " cubic units\n";
        cout << "   - Surface Area: " << surfaceArea(height, width, length) << " square units\n";
        cout << "   - Area-to-Volume Ratio: " << ratio(height, width, length) << endl;
    } 
    else {
        cout << "Invalid choice. Please enter 1 or 2." << endl;
    }

    return 0;
}
