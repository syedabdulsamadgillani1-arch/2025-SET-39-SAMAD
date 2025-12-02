#include <iostream>
using namespace std;

int main() {
    int attended = 48;
    int total = 60;

    bool requirementMet = attended >= (total * 0.75);
    bool moreThan50 = attended > 50;
    bool lessThan60 = attended < (total * 0.6);

    cout << requirementMet << endl;
    cout << moreThan50 << endl;
    cout << lessThan60 << endl;

    return 0;
}
