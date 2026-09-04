#include <iostream>

using namespace std;

void  swap(int &a,int &b){
//	int temp = a;
//	a = b;
//	b = temp;
	a = (a+b)-(b=a);
}

int main(){
	int a, b;
	cout<<"Enter 2 numbers: ";
	cin>>a>>b;
	cout<<"before swap."<<endl;
	cout<<"A= "<<a<<" B= "<<b<<endl;
	swap(a,b);
	cout<<"After swap"<<endl;
	cout<<"A= "<<a<<" B= "<<b<<endl;
	return 0;
}
