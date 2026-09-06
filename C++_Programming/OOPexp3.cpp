//constructor
#include <iostream>
using namespace std;

class Car {
public:
    string brand;

    // Constructor
    Car(string b) {
        brand = b;
        cout << "Car created: " << brand << endl;
    }
};

int main() {
    Car c1("BMW");   // constructor runs automatically
    return 0;
}