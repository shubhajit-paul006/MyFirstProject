#include <iostream>
#include <cmath>

using namespace std;

class complex{
    int real, imag;
    public:
    void getData();
    void showData();
    void modulus();
    complex sum(complex);
};

void complex::getData(){
    cout<<"Enter your complex number..."<<endl;
    cout<<"Enter real number: ";
    cin>>real;
    cout<<"Enter imaginary number: i ";
    cin>>imag;
}

void complex::showData(){
    cout<<"Your complex number is: "<<real<<" + i "<<imag<<endl;
}

void complex::modulus(){
    double mod = sqrt(real*real + imag*imag);
    cout<<"The modulus of your complex number is: "<<mod<<endl<<endl;
}

complex complex::sum(complex c){
    complex temp;
    temp.real = real + c.real;
    temp.imag = imag + c.imag;
    return temp;
}

int main(){
    complex c1, c2, c3;
    c1.getData();
    c1.showData();

    c2.getData();
    c2.showData();

    cout<<"The sum of your complex numbers is: "<<endl;
    c3 = c1.sum(c2);
    c3.showData();

    c1.modulus();
    c2.modulus();
    c3.modulus();

    return 0;
}