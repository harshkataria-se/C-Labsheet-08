#include <iostream>
using namespace std;

class BankAccount {
private:
    float balance;  
public:
    BankAccount() {
        balance = 0;
    }
    void deposit(float amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposited: " << amount << endl;
        } else {
            cout << "Invalid deposit amount!" << endl;
        }
    }
    void withdraw(float amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "Withdrawn: " << amount << endl;
        } else {
            cout << "Invalid or insufficient balance!" << endl;
        }
    }
    void displayBalance() {
        cout << "Current Balance: " << balance << endl;
    }
};

int main() {
    BankAccount account;  
    account.deposit(1000);   
    account.withdraw(300);   
    account.displayBalance(); 
    account.withdraw(800); 
    return 0;
}
