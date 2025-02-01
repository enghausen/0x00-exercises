#include <iostream>
#include "throw_parabola.h"

using namespace std;

int main() {
    // Display program purpose
    cout << "Projectile Motion Calculator\n";
    cout << "--------------------------------\n";
    cout << "This program calculates the vertical position (y) \n";
    cout << "of a projectile at a given horizontal distance (x).\n";
    cout << "--------------------------------\n\n";

    // Define parameters
    double v0 = 5.0;       // Start speed (m/s)
    double theta = 45.0;   // Angle (degrees)
    double g = 9.82;       // Gravity (m/s²)
    double x = 1.4;        // Horizontal distance (m)

    // Call function
    double y = calculateVerticalDistance(v0, theta, g, x);
    
    // Display results with explanation
    cout << "Input Parameters:\n";
    cout << "   - Initial Speed (v0): " << v0 << " m/s\n";
    cout << "   - Launch Angle (theta): " << theta << " degrees\n";
    cout << "   - Gravity (g): " << g << " m/s²\n";
    cout << "   - Horizontal Distance (x): " << x << " m\n\n";

    cout << "Result:\n";
    cout << "   - Vertical Height at x = " << x << " m: " << y << " m" << endl; // Newline + forces buffer flush

    return 0;
}