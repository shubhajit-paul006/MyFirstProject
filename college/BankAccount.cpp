#include <iostream>
#include <string>
#include<cstdlib>
#include<bits/stdc++.h>

using namespace std;

class BankAccount{
	long int account_number;
	string name;
	double balance;
	public:
		void Input();
		void Display();
		void Deposit();
		void Withdraw();
};

void BankAccount::Input(){
	cout<<"Enter your Bank account number: ";
	cin>>account_number;
	//cin.ignore();
	cout<<"Enter your name: ";
	getline(cin, name);
	balance = 1000.0;
}

void BankAccount::Display(){
	cout<<"Hello "<<name<<endl;
	cout<<"Account: "<<account_number<<endl;
	cout<<"Current Balance: "<<balance<<endl<<endl;
}

void BankAccount::Deposit(){
	double amount;
	cout<<"Enter amount to Deposit: ";
	cin>>amount;
	if (amount>0){
		BankAccount::balance += amount;
	}
	else{
		cout<<"Amount must be positive."<<endl;
	}
}

void BankAccount::Withdraw(){
	double amount;
	cout<<"Enter amount to Withdraw: ";
	cin>>amount;
	if(amount<=balance){
		balance -= amount;
	}
	else{
		cout<<"Insufficient Balance."<<endl;
	}
}

int main(){
	BankAccount b;
	int ch;

	b.Input();
	b.Display();
	
	while(true){
		cout<<"Enter 1 to check info."<<endl;
		cout<<"Enter 2 to Deposit."<<endl;
		cout<<"Enter 3 to Withdraw."<<endl;
		cout<<"Enter 4 to Exit."<<endl;
		cin>>ch;
		
		switch (ch){
			case 1 : 
				b.Display();
				break;
			case 2:
				b.Deposit();
				break;
			case 3:
				b.Withdraw();
				break;
			case 4:
				cout<<"Thank you for visiting our bank..."<<endl;
				exit(0);
			default :
				cout<<"Wrong Input"<<endl;
		}
	}
	return 0;
}
