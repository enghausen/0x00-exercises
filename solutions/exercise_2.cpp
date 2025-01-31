#include <iostream>
#include <cmath>

using namespace std;

int main() {
    cout << "exercise 2" << endl;
    /*
    Define a variable  angle of type double initialized to some value less than 2*pi

    Define a variable  x of type double initialized cos(angle) 
    Define a variable  y of type double initialized sin(angle)

    Define a variable length of type double initialized to the length of (x,y) 
    Write the length to the console
    Vary angle and observe the length value.
    Hint: Length is defined as sqrt(x^2+y^2), include <cmath> to implement this
    */
    double angle = 1.5; // Vinkel i radianer
    double x = cos(angle); // x-koordinat
    double y = sin(angle); // y-koordinat
    double length = sqrt(pow(x, 2) + pow(y, 2)); // Længde af vektoren
    cout << "Length of vector (" << x << ", " << y << ") is " << length << endl;

    return 0;
}