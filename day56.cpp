#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

class Customer {
public:
    string bank_name;
    int account_number;
    int *balance;

public:
    // Default constructor
    Customer() {
        balance = new int(0);  // Initialize to avoid undefined behavior
        cout << "Default Constructor is called" << endl;
    }

    // Parameterized constructor
    Customer(string bank_name, int balance) {
        this->bank_name = bank_name;
        this->balance = new int;
        *this->balance = balance;

        cout << this->bank_name << " " << *this->balance << endl;
    }

    Customer(string Name, int AccountNumber, int Balance) {
        bank_name = Name;
        account_number = AccountNumber;

        balance = new int;
        *balance = Balance;

        cout << bank_name << " " << account_number << " " << *balance << endl;
    }

    // Copy constructor (fixed)
    Customer(Customer &B) {
        bank_name = B.bank_name;
        account_number = B.account_number;
        
        this->balance = new int;
        *this->balance = *B.balance; // Copy the value, not the pointer

        cout << "Copy Constructor is called: " << bank_name << " " << account_number << " " << *balance << endl;
    }

    // Destructor
    ~Customer() {
        delete balance;  // Free allocated memory
        cout << "Destructor is called" << endl;
    }
};

int main() {
    Customer Nikhil;

    Customer Nidhi("SBI", 1500);

    Customer Saneha("PNB", 121234, 500);

    Customer Chandan(Saneha);  // Calls copy constructor

    return 0;
}
