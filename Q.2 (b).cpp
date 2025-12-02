#include <iostream>
using namespace std;

int main() {
    int temperature = 32;
    bool windowClosed = true;

    cout << ((temperature > 30 && windowClosed) ? "AC ON" : "AC OFF");

    return 0;
}
