#include <iostream>
using namespace std;

int main() {
    double price = 1200;
    double discount = price * 0.25;
    double afterDiscount = price - discount;
    double serviceCharges = afterDiscount * 0.08;
    double finalCost = afterDiscount + serviceCharges + 50;

    cout << finalCost;

    return 0;
}
