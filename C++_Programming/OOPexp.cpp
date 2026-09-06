#include <iostream>
using namespace std;

class Car {
public:
    string brand;
    int speed;
};

int main() {
    Car c1;
    c1.brand = "Toyota";
    c1.speed = 120;

    cout << "Brand: " << c1.brand << endl;
    cout << "Speed: " << c1.speed << endl;
    return 0;
}