//class with function

#include <iostream>
using namespace std;

class Car {
public:
    string brand;

    void honk() {
        cout << brand << " says: Beep Beep!" ;
    }
};

int main() {
    Car c1;
    c1.brand = "Honda";
    c1.honk();
    return 0;
}