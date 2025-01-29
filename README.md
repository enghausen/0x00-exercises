# 0x00 Exercises

## Exercise 1
1. Open the file `exercise_1.cpp`.
2. Define a variable of type `int` called `weight`. Assume the unit is `[kg]`.
3. Define a variable of type `double` called `height`. Assume the unit is `[m]`.
4. Initialize `weight` and `height` with appropiate values.
5. Define a variable of type `double` called `bmi` and initialize it to `weight/height * 2`.

Then write `BMI for weight: <weight> and height: <height> is <bmi>` to the console output.

Test your program by changing the values for `height` and `weight`, rebuilding, and running the program from the terminal.

## Exercise 2
1. Open the file `exercise_2.cpp`.
2. Define a variable `angle` of type `double` and initialize it to some value less than $2\pi$.
3. Define a variable `x` of type `double` initialized to $\cos(\texttt{angle})$
4. Define a variable `y` of type `double` initialized to $\sin(\texttt{angle})$
5. define a variable `length` of type `double` initialized to the length of $(\texttt{x},\texttt{y)}$

Then write `length` to the console output.

Test your program by varying `angle` and `length`, ask yourself: What am I calculating?

_**Hint** Length is defined as $\sqrt{x^2+y^2}$ and can be found in the `cmath` library as `sqrt(x, y)`, so you should include that header._

## Exercise 3
1. Use a chatbot to find a formula that describes a throw of a
mass with start speed $v_0$, and angle $\alpha$ and under the influence of the uniform gravitational field given by $g=9.82\frac{m}{s^2}$
2. Use ChatGPT to make a graph using a start speed $5\frac{m}{s}$, an angle of $45\deg$ and a mass of $100 kg$
3. Use a chatbot to make a graph using a start speed of $5 \frac{m}{s}$, varying the angle from $5$ to $80$ $\deg$ in steps of five and a mass og $100 kg$
4. Describe to your fellow student what the parameters are – how many, what do each of them represent, what is the type of the value and what is the result (what does it represent and what type is it). **DO THIS BEFORE NEXT STEP** – the purpose is that you learn something NOT the answer in itself.
5. Use a chatbot to do the same as in the previous step (4). and compare the descriptions.

We asked a chatbot the following “create a prototype of a function in C++ for the projectile motion (vertical distance) at a given horizontal distance”. It gave us the following:
`double calculateVerticalDistance(double v0, double theta, double g, double x);` relate the parameters of the function to the description you made in step 4

6. Copy the prototype of the function into the file `throw_parabola.h`. Above the prototype, include a comment describing the parameters – one parameter per line

7. Using the formula found by ChatGPT in step 1, implement the function in the file
`throw_parabola.cpp`. **DO NOT USE A CHATBOT FOR THIS**. 

8) Use a chatbot to create a main function that tests the function with the following
parameters: start speed $5 \frac{m}{s}$, an angle of $45 \deg$ and a mass of $100 kg$. Is the result of your function as expected? (what was expected?)

## Exercise 4
The following functions are to be implemented as protypes in `geometrics.h` file and as fully implemented functions in the `geometrics.cpp`:
- `double volume (double radius)`, that calculates the volume of a sphere
- `double area(double radius)`, that calculates the surface area of a circle
- `double ratio (double radius)`, that calculates the area/volume of a sphere
  
Do the same for a rectangular box of a given height, width and length (i.e. implement
as a prototype in `geometrics.h` and the implementation in `geometrics.cpp` 

Test the functions in main in the file `exercise_4.cpp`. Look up the formulas where ever you would like.