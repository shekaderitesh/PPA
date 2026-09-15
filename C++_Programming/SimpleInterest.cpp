#include <iostream>
using namespace std;

int main() {
    float p, r, t, si;
    cout << "Enter P, R and T: ";
    cin >> p >> r >> t;

    si = (p * r * t) / 100;
    cout << "Simple Interest = " << si;

    return 0;
}
