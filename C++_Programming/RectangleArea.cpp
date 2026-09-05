#include <iostream>

class Rectangle {
public:
    float length;
    float width;

    float area() {
        return length * width;
    }
};

int main() {
    Rectangle r;

    r.length = 10;
    r.width = 5;

    std::cout << "Area = " << r.area() << std::endl;

    return 0;
}
