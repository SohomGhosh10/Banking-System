#include<iostream>
using namespace std;
class BankAccount{
private:
    string accountHolder;
    int accountNumber;
    double balance;
    double interestRate;
public:
    BankAccount(string accHolder, int accNumber, double bal, double intRate){
        accountHolder = accHolder;
        accountNumber = accNumber;
        balance = bal;
        interestRate = intRate;
    }
    void deposit(int amount){
        balance += amount;
        cout << "Successfully deposited" << endl;
    }
    void withdraw(double amount) {
            if (balance >= amount) {
                balance -= amount;
                cout << "Withdrawal successful!" << endl;
            } else {
                cout << "Insufficient funds!" << endl;
            }
        }

        void checkBalance() {
            cout << "Your current balance is: " << balance << endl;
        }

        void calculateInterest() {
            double interest = balance * (interestRate / 100);
            balance += interest;
            cout << "Interest calculated and added to your account!" << endl;
        }
};

int main() {
    BankAccount myAccount("Sohom Ghosh",1234567890,  1000.00, 2.5);

    myAccount.checkBalance();
    myAccount.deposit(500.00);
    myAccount.checkBalance();
    myAccount.withdraw(2000.00);
    myAccount.withdraw(500.00);
    myAccount.checkBalance();
    myAccount.calculateInterest();
    myAccount.checkBalance();

    return 0;
}