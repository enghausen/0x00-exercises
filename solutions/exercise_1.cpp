
#include <iostream>

using namespace std;

int main() {
    cout << "exercise 1" << endl;
    /*
    Define a variable of type int called weight assume the unit is [kg]
    Define a variable of type double called height assume the unit is [m]
    Initialize to suitable values

    Define a variable of type double called bmi and initialize it to  weight/height2

    Then write bmi for weight:<weight> and height:<height> is <the result> to the console output.
    Vary  the height and weight values  set height=0 and observe
    */
    
    int weight; 
    double height;
    double bmi;

    weight = 85; // Example weight in kg
    height = 1.85; // Example height in meters
    bmi = weight / (height * height); // BMI calculation

    cout << "BMI for weight: " << weight << " and height: " << height << " is " << bmi << endl;


    return 0;
}