#include <iostream>
#include "throw_parabola.h"

int main() {
    // Display program purpose
    std::cout << "Projectile Motion Calculator\n";
    std::cout << "--------------------------------\n";
    std::cout << "This program calculates the vertical position (y) \n";
    std::cout << "of a projectile at a given horizontal distance (x).\n";
    std::cout << "--------------------------------\n\n";

    // Define parameters
    double v0 = 5.0;       // Start speed (m/s)
    double theta = 45.0;   // Angle (degrees)
    double g = 9.82;       // Gravity (m/s²)
    double x = 1.4;        // Horizontal distance (m)

    // Call function
    double y = calculateVerticalDistance(v0, theta, g, x);
    
    // Display results with explanation
    std::cout << "Input Parameters:\n";
    std::cout << "   - Initial Speed (v0): " << v0 << " m/s\n";
    std::cout << "   - Launch Angle (theta): " << theta << " degrees\n";
    std::cout << "   - Gravity (g): " << g << " m/s²\n";
    std::cout << "   - Horizontal Distance (x): " << x << " m\n\n";

    std::cout << "Result:\n";
    std::cout << "   - Vertical Height at x = " << x << " m: " << y << " m\n";

    return 0;
}