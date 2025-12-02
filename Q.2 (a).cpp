#include <iostream>
using namespace std;

int main() {
    double balance = 1000; // initial recharge amount

    balance += balance * 0.10;

    cout << balance;

    return 0;
}
