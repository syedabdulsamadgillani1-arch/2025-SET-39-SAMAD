#include <iostream>
using namespace std;

int main() {
    int age;
    cout << "Enter age: ";
    cin >> age;

    cout << "Age " << age << " falls under the category: "
         << ((age < 13) ? "Child" : (age <= 19 ? "Teenager" : "Adult"));

    return 0;
}
