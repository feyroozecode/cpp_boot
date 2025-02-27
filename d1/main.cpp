#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main(){
    // // -- Rectangle Area Calculation

    // the algorithm is simple, we just need to multiply the width by the height
    // and we will get the area of the rectangle
    double rectangleLength;
    double rectangleWidth;
    double rectangleArea;

    // Get rectangle dimesnion from the user
    cout << "Enter the length of the rectangle: ";
    cin >> rectangleLength;
    cout << "Enter the width of the rectangle: ";
    cin >> rectangleWidth;

    // Calculate the area of the rectangle
    rectangleArea = rectangleLength * rectangleWidth;

    // Display the area of the rectangle
    if(rectangleLength > 0 && rectangleWidth < 0){
        cout << "Error: Length and with must be non-negative" << endl;
        return 1;
    }

    // Calculate the area of the rectangle
    rectangleArea = rectangleLength * rectangleWidth;

    // Display the result 
    cout << "The area of the rectangle is: " << rectangleArea << endl;

    // -- Circle Area Calculation
    double circleRadius;
    double circleArea;

    // Get the radius of the circle from the user
    cout << "Enter the radius of the circle: ";
    cin>> circleRadius;

    // Check circle radius (non-negative)
    if(circleRadius < 0){
        cout << "Error: Radius must be non-negative" << endl;
        return 1;
    }

    // Calculate the area of the circle
    circleArea = M_PI * pow(circleRadius, 2); // same with circleRadius**2
    
    // Display the result 
    cout << "The area of the circle is: " << circleArea << endl;

    // --Type conversion Example
    

    return 0;
}