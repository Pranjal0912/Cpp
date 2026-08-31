#include <iostream>
#include <cmath>
using namespace std;

class Circle {
private:
    double radius;

public:
    // Constructor
    Circle(double r = 1.0) {
        radius = r;
        cout << "Circle created with radius: " << radius << endl;
    }

    // Destructor
    ~Circle() {
        cout << "Circle with radius " << radius << " is being destroyed." << endl;
    }

    // Member function to calculate area
    double calculate_area() {
        return M_PI * radius * radius;
    }

    // Member function to calculate circumference
    double calculate_circumference() {
        return 2 * M_PI * radius;
    }

    
};

int main() {
    Circle c1(5.0); // Create a circle with radius 5.0
    cout << "Area: " << c1.calculate_area() << endl;
    cout << "Circumference: " << c1.calculate_circumference() << endl;
    return 0;
}


