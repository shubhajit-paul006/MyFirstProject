// inline function

#include <iostream>
using namespace std;

inline float square(float x)
{
	return x * x;
}

int main()
{
	float n, sq;
	cout << "Enter a number: ";
	cin >> n;
	sq = square(n);
	cout << "Result: " << sq << endl;

	return 0;
}