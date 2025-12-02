#include <iostream>
using namespace std;

int main() {
    int attendance = 75;
    bool feePaid = true;

    cout << ((attendance >= 75 && feePaid) ? "Eligible" : "Not Eligible");

    return 0;
}
