#include <iostream>
using namespace std;

int main() {
    double balance;
    bool loyal;
    
    cout << "Enter account balance: ";
    cin >> balance;
    
    cout << "Are you a loyal customer? (1 for yes, 0 for no): ";
    cin >> loyal;

    cout << "Account Type: " 
         << ((balance < 100) ? "Low Balance" 
             : (balance <= 500 ? "Standard Account" : "Premium Account")) 
         << endl;

    cout << "Special Offer Eligibility: " 
         << ((balance > 200 && loyal) ? "Eligible" : "Not Eligible") 
         << endl;

    return 0;
}
