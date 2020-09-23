// Lab 9 Pre-Lab Assignment

// Add the following functions:

// 1. 'getRadius' asks the user to enter the radius of a circle
//     and returns the given value. (should return a double)

// 2. 'calcArea' takes the radius and returns the area of a circle.

// 3. 'printResults' void type function that should print the results to
//    console.

// Your function needs to have a local variable called 'PI' which holds the
// value '3.14159'.

// The function call is provided, you just need to implement the
// function prototype and function definition.

#include <iostream>
using namespace std;

// TODO - write the prototypes here
double getRadius (double);
double calcArea (double);
void printResults (double);

int main()
{
    double radius,
           area;

    // TODO - call 'getRadius' function and assign the
    //        returned value to radius.
    radius = getRadius(radius);

    area = calcArea(radius);

    // TODO - move the following cout to the 'printResults' function
    //        and call that function here instead.
    printResults (area);

    return 0;
}

// TODO - write the functions here

double getRadius (double radius)
{
    cout << "Enter the radius of a circle: ";
    cin >> radius;
    return radius;
}

double calcArea (double radius)
{
    const double PI= 3.14159;
    double total;
    total = PI * (radius * radius);
    return total;
}

void printResults(double area)
{
    cout << endl << "The area of your circle is " << area << " units squared."
         << endl;
}
