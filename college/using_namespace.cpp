#include<iostream>
using namespace std;
namespace shubhajit
{
	void print(string n){
		cout<<n;
	}
}
int main(){
	using namespace shubhajit;
	print("rahul");
	return 0;
}
