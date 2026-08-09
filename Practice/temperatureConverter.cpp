#include <iostream>
using namespace std;

int main(){
    float C,F;
    cout<<"Enter Temperature(Celsius): ";
    cin>>C;
    F = (C/5.0*9.0)+32;
    cout<<C<<"C = "<<F<<"F"<<endl;
    return 0;
}
