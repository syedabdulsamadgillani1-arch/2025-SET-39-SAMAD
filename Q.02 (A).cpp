#include <iostream>
using namespace std;

int main() {
    int required = 500;
    int current = 420;

    bool stockSufficient = current >= required;
    bool lessThanHalf = current < (required * 0.5);
    bool equalStock = current == required;
    bool shortageGreater = (required - current) > 50;

    cout << stockSufficient << endl;
    cout << lessThanHalf << endl;
    cout << equalStock << endl;
    cout << shortageGreater << endl;

    return 0;
}
