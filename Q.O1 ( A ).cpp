#include <iostream>
using namespace std;

int main() {
    int burgers = 2 * 350;
    int drink = 120;
    int fries = 150;

    int total = burgers + drink + fries;
    double tax = total * 0.07;
    double finalAmount = total + tax;
    double average = finalAmount / 4;

    cout << total << endl;
    cout << tax << endl;
    cout << finalAmount << endl;
    cout << average << endl;

    return 0;
}
