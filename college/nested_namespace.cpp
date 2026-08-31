 #include <iostream>
using namespace std;

namespace n1{
	int a = 10;
	namespace n2{
		int b = 20;
		print(){
			cout<<a+b<<endl;
		}
	}
}

int main(){
	using namespace n1;
	using namespace n2;
	
	cout<<a<<endl;
	cout<<b<<endl;
	print();
	return 0;
}
