
#include <iostream>
using namespace std;

int main() {
    float vf, vi, a, S;

    cout << "Enter final velocity: ";
    cin >> vf;

    cout << "Enter initial velocity: ";
    cin >> vi;

    cout << "Enter acceleration: ";
    cin >> a;

    S = (vf * vf - vi * vi) / (2 * a);

    cout << "Displacement S = " << S;

    return 0;
}
