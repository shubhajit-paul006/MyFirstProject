// Bank Account (Encapsulation & Methods)
// Goal: Practice private data members, public getters/setters, and validation.

// Task: Create a BankAccount class with private attributes std::string accountHolder and double balance. 
//Add public methods:

// A constructor to initialize both.

// deposit(double amount) (must ensure amount is positive).

// withdraw(double amount) (must ensure sufficient balance).

// displayBalance() to print the current status.
// Test it by creating an object in main() and performing a few transactions.

#include <iostream>
#include <string>

using namespace std;

class BankAccount{
    private:
        string accountHolder;
        double balance;
    
    public:
        BankAccount(string, double);
        void checkBalance();
        void deposit(double);
        void withdraw(double);
};

BankAccount::BankAccount(string accountHolder, double balance){
    BankAccount::accountHolder = accountHolder;
    BankAccount::balance = balance;
    cout<<"Hello "<<accountHolder<<endl;
}

void BankAccount::checkBalance(){
    cout<<"Current balance -> "<<BankAccount::balance<<endl;
}

void BankAccount::deposit(double amount){
    if(amount>0){
        BankAccount::balance += amount;
        cout<<"Amount Credited."<<endl;
    }else{
        cout<<"Amount must be positive."<<endl;
    }
    cout<<"Current balance -> "<<BankAccount::balance<<endl;
}

void BankAccount::withdraw(double amount){
    if(amount<=BankAccount::balance){
        BankAccount::balance -= amount;
        cout<<"Amount Debited."<<endl;
    }else{
        cout<<"Insufficient balance."<<endl;
    }
    cout<<"Current balance -> "<<BankAccount::balance<<endl;
}

int main(){
    string name;
    bool x = true;
    int ch;
    double amount = 0.0;
    cout<<"Enter your name: ";
    getline(cin, name);

    BankAccount b1(name, amount);

    while(x){
        cout<<"Press 1 to Check Balance."<<endl;
        cout<<"Press 2 to Deposit."<<endl;
        cout<<"Press 3 to Withdraw."<<endl;
        cout<<"Press 4 to exit."<<endl;
        cout<<"Enter your choice: ";
        cin>>ch;
        switch (ch)
        {
        case 1 :
            b1.checkBalance();
            break;

        case 2 :
            cout<<"Enter Amount: ";
            cin>>amount;
            b1.deposit(amount);
            break;

        case 3 :
            cout<<"Enter Amount: ";
            cin>>amount;
            b1.withdraw(amount);
            break;

        case 4 :
            cout<<"Exiting the program..."<<endl;
            cout<<"Thank you for visiting our Bank."<<endl;
            x = false;
            break;

        default:
            cout<<"Wrong input."<<endl;
            cout<<"Killing the Program."<<endl;
            return 0;
        }
    }

    return 0;
}