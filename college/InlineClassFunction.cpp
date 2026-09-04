#include<iostream>
using namespace std;

class test
{
    public:
    int x;
    void myFunction();
};

inline void test::myFunction()
{
    cout << "Hello World";
}

int main()
{
    test obj;
    obj.myFunction();
    return 0;
}