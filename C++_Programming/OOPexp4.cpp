//Public and Private Acess specifier
#include <iostream>
using namespace std;

class Car {
private:
    int speed;   // can't be accessed directly outside

public:
    void setSpeed(int s) {
        speed = s;
    }
    int getSpeed() {
        return speed;
    }
};

int main() {
    Car c1;
    c1.setSpeed(100);
    cout << "Speed: " << c1.getSpeed() << endl;

    // c1.speed = 100;  // ERROR: speed is private
    return 0;
}