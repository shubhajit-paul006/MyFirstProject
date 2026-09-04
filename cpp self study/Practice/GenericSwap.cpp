// Generic Swap Function
// Goal: Write a function template that can swap any two variables of the same type (ints, doubles, strings, etc.).


// Task: Create a template function template <typename T> void mySwap(T &a, T &b) that swaps their values. 
// Test it in main() with integers and strings.

#include <iostream>
#include <string> // Required for string swapping
using namespace std;

template <typename T>
void mySwap(T &a, T &b){
    T temp = b;
    b = a;
    a = temp;
}


int main(){
    int a, b;
    cout<<"Enter 1st number: ";
    cin>>a;
    cout<<"Enter 2nd number: ";
    cin>>b;

    cout<<"Before swap ---"<<endl;
    cout<<"A = "<<a<<", B = "<<b<<endl;

    mySwap(a,b);

    cout<<"After swap ---"<<endl;
    cout<<"A = "<<a<<", B = "<<b<<endl;


    string str1, str2;
    cout << "Enter 1st string: ";
    cin >> str1;
    cout << "Enter 2nd string: ";
    cin >> str2;

    cout << "\nBefore swap ---"<<endl;
    cout<<"str1 = "<<str1<<", str2 = "<<str2<<endl;

    mySwap(str1, str2);

    cout<<"After swap ---"<<endl;
    cout<<"str1 = "<<str1<<", str2 = "<<str2<<endl;


    return 0;
}
