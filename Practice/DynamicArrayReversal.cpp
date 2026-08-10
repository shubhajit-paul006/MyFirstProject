#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	int numElements;
	
	cout<<"How many numbers you want to store?"<<endl;
	cin>>numElements;
	
	vector<int> numbers(numElements);
	
	for(int i = 0; i<numElements; i++)
	{
		cout<<"Enter element "<<i<<": ";
		cin>>numbers[i];
	}
	
	cout<<"--- Numbers in reverse order ---"<<endl;
	
	for(int i = numElements-1; i>=0 ; i--)
	{
		cout<<numbers[i]<<" ";
	}
	
	return 0;
}
