//Program 1: The Classic Swap
//Goal: Practice writing a function that modifies original variables using references.
//
//Task: Write a function void swapNumbers(int &a, int &b) that swaps the values of two integers. 
//In main(), declare two variables, print them, call swapNumbers, 
//and print them again to verify they swapped.

#include <iostream>
using namespace std;

void swapNumbers(int &a, int &b)
{
	int temp = a;
	a=b;
	b=temp;
}

int main()
{
	int a , b;
	cout<<"Enter 1st Number: ";
	cin>>a;
	cout<<"Enter 2nd Number: ";
	cin>>b;
	cout<<"Before Swap."<<endl;
	cout<<a<<"  "<<b<<endl;
	swapNumbers(a,b);
	cout<<"After Swap."<<endl;
	cout<<a<<"  "<<b<<endl;
	return 0;
}

