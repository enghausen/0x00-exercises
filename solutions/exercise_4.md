# 📌 Exercise 4: Geometric Calculations

This program calculates the **volume, surface area, and area-to-volume ratio** for both **a sphere** and **a rectangular box**.

---

## **1️⃣ Understanding the Parameters**
The geometric properties of shapes depend on key measurements.

### **1.1 Parameters and Usage**
| Parameter | Symbol | Meaning | Type | Used In |
|-----------|--------|---------|------|---------|
| **Radius** | r | Radius of the sphere | **Double (units)** | ✅ **Code** (`radius` in `exercise_4.cpp`) |
| **Height** | h | Height of the rectangular box | **Double (units)** | ✅ **Code** (`height` in `exercise_4.cpp`) |
| **Width** | w | Width of the rectangular box | **Double (units)** | ✅ **Code** (`width` in `exercise_4.cpp`) |
| **Length** | l | Length of the rectangular box | **Double (units)** | ✅ **Code** (`length` in `exercise_4.cpp`) |
| **Volume** | V | Total space occupied by the shape | **Double (cubic units)** | ✅ **Code (return value)** (`volume()` function) |
| **Surface Area** | A | Total area covering the shape | **Double (square units)** | ✅ **Code (return value)** (`surfaceArea()` function) |
| **Area-to-Volume Ratio** | R | Relationship between surface area and volume | **Double (unitless)** | ✅ **Code (return value)** (`ratio()` function) |

---

## **2️⃣ Mathematical Formulas**
### **2.1 Sphere**
#### **Volume:**
$$
V = \frac{4}{3} \pi r^3
$$

#### **Surface Area:**
$$
A = 4 \pi r^2
$$

#### **Ratio:**
$$
R = \frac{A}{V} = \frac{4 \pi r^2}{\frac{4}{3} \pi r^3} = \frac{3}{r}
$$

---

### **2.2 Rectangular Box**
#### **Volume:**
$$
V = h \times w \times l
$$

#### **Surface Area:**
$$
A = 2(hw + hl + wl)
$$

#### **Ratio:**
$$
R = \frac{A}{V} = \frac{2(hw + hl + wl)}{hwl}
$$

---

## **3️⃣ C++ Implementation**
### **3.1 Function Prototype (`geometrics.h`)**
```cpp
#ifndef GEOMETRICS_H
#define GEOMETRICS_H

/**
 * Calculates the volume of a sphere.
 * @param radius The radius of the sphere.
 * @return The volume of the sphere.
 */
double volume(double radius);

/**
 * Calculates the surface area of a sphere.
 * @param radius The radius of the sphere.
 * @return The surface area of the sphere.
 */
double surfaceArea(double radius);

/**
 * Calculates the ratio of area to volume for a sphere.
 * @param radius The radius of the sphere.
 * @return The area-to-volume ratio.
 */
double ratio(double radius);

/**
 * Calculates the volume of a rectangular box.
 * @param height The height of the box.
 * @param width The width of the box.
 * @param length The length of the box.
 * @return The volume of the box.
 */
double volume(double height, double width, double length);

/**
 * Calculates the surface area of a rectangular box.
 * @param height The height of the box.
 * @param width The width of the box.
 * @param length The length of the box.
 * @return The surface area of the box.
 */
double surfaceArea(double height, double width, double length);

/**
 * Calculates the ratio of surface area to volume for a rectangular box.
 * @param height The height of the box.
 * @param width The width of the box.
 * @param length The length of the box.
 * @return The surface-area-to-volume ratio.
 */
double ratio(double height, double width, double length);

#endif // GEOMETRICS_H
```

---

### **3.2 Function Implementation (`geometrics.cpp`)**
```cpp
#define _USE_MATH_DEFINES  // Enables M_PI in Windows
#include "geometrics.h"
#include <cmath>  // For M_PI

using namespace std;

// Sphere Functions
double volume(double radius) {
    return (4.0 / 3.0) * M_PI * pow(radius, 3);
}

double surfaceArea(double radius) {
    return 4 * M_PI * pow(radius, 2);
}

double ratio(double radius) {
    double sphereVolume = volume(radius);
    return sphereVolume == 0 ? 0 : surfaceArea(radius) / sphereVolume; // Avoid division by zero. This is a ternary conditional expression. It works as a shortcut for an if-else statement.
}

// Rectangular Box Functions
double volume(double height, double width, double length) {
    return height * width * length;
}

double surfaceArea(double height, double width, double length) {
    return 2 * (height * width + height * length + width * length);
}

double ratio(double height, double width, double length) {
    double boxVolume = volume(height, width, length);
    return boxVolume == 0 ? 0 : surfaceArea(height, width, length) / boxVolume; // Avoid division by zero.
}
```

---

### **3.3 Main Program (`exercise_4.cpp`)**
```cpp
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
        cout << "   - Surface Area: " << surfaceArea(radius) << " square units\n";
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
```

---

## **4️⃣ Expected Results and Insights**
📌 **Sphere:**  
- The surface area-to-volume ratio **decreases** as the sphere **gets larger**.
- This explains why **larger objects retain heat longer** (lower ratio = less surface area per unit volume).

📌 **Rectangular Box:**  
- A **flat and wide** box has a **higher ratio** than a **cube** of the same volume.
- This explains why **animals in colder climates** (like polar bears) have compact bodies to **minimize heat loss**.

---

## **5️⃣ Compilation & Execution**
### **5.1 Compile with g++**
If using **g++**, run the following command:
```sh
g++ exercise_4.cpp geometrics.cpp -o exercise_4.exe
./exercise_4.exe
```

---

## 🎯 **Final Notes**
✔ **Correct surface area formula for the sphere.**  
✔ **Supports both sphere and rectangular box calculations.**  
✔ **Modular function design for reusability.**  
✔ **Demonstrates mathematical principles in coding.**  

---