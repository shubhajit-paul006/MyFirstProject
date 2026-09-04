//Dynamic Allocation (new and delete)
//Goal: Bridge your C manual memory management (malloc/free) with C++ operators (new/delete).
//
//Task: Write a program that:
//
//Dynamically allocates a single integer on the heap using int* ptr = new int;.
//
//Assigns it a value from user input.
//
//Prints the value.
//
//Frees the memory using delete ptr; to prevent memory leaks.

#include <iostream>
using namespace std;

int main() {
    int* ptr = new int;

    cout << "Enter an Integer: ";
    cin >> *ptr;

    cout << "The number you have entered -> " << *ptr << endl;
    cout << "The Address -> " << ptr << endl;

    delete ptr;
    ptr = nullptr;

    return 0;
}

