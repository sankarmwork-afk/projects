#include <iostream>
#include <string>
using namespace std;

class BankAccount {
private:
    string name;
    int accNumber;
    double balance;

public:

    void createAccount() {
        cout << "Enter account holder name: ";
        cin >> name;

        cout << "Enter account number: ";
        cin >> accNumber;

        cout << "Enter initial balance: ";
        cin >> balance;
    }

    void deposit() {
        double amount;
        cout << "Enter amount to deposit: ";
        cin >> amount;

        balance += amount;
        cout << "Deposit successful. New balance: " << balance << endl;
    }

    void withdraw() {
        double amount;
        cout << "Enter amount to withdraw: ";
        cin >> amount;

        if (amount > balance) {
            cout << "Insufficient balance!" << endl;
        } else {
            balance -= amount;
            cout << "Withdrawal successful. Remaining balance: " << balance << endl;
        }
    }

    void displayAccount() {
        cout << "\n----- Account Details -----" << endl;
        cout << "Name: " << name << endl;
        cout << "Account Number: " << accNumber << endl;
        cout << "Balance: " << balance << endl;
    }
};

int main() {

    BankAccount account;
    int choice;

    cout << "===== SIMPLE BANK MANAGEMENT SYSTEM =====" << endl;

    account.createAccount();

    do {

        cout << "\n------ MENU ------" << endl;
        cout << "1. Deposit Money" << endl;
        cout << "2. Withdraw Money" << endl;
        cout << "3. Show Account Details" << endl;
        cout << "4. Exit" << endl;

        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice) {

            case 1:
                account.deposit();
                break;

            case 2:
                account.withdraw();
                break;

            case 3:
                account.displayAccount();
                break;

            case 4:
                cout << "Thank you for using the bank system!" << endl;
                break;

            default:
                cout << "Invalid choice!" << endl;
        }

    } while(choice != 4);

    return 0;
}