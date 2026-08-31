//constructor overloading
#include <iostream>
using namespace std;

class test{
	
	int a, b;
	
	public:
		test(){		//default constructor
			a=5;
			b=6;
		}
		test(int x, int y)	//parameterized constructor
		{
			a = x;
			b = y;
		}
		test(test &p)	//copy constructor
		{
			a = p.a;
			b = p.b;
		}
		void display(){
			cout<<a<<endl<<b<<endl;
		}
		~test()
		{
			cout<<"Object destroyed...\n";
		}
};

int main(){
	test t1;
	t1.display();
	test t2(8,9);
	t2.display();
	test t3 = t1;	// test t2(t1);
	t3.display();
		
	return 0;
}
