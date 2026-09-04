#include <iostream>
#include <string>

using namespace std;

class emp
{
	string eid,  des;
	int age, salary;
	public:
		void getData();
		void putData();
		void avgSal(emp[]);
		void heightSal(emp[]);
};

void emp::getData()
{
	cout<<"Enter Employee Details..."<<endl;
	cout<<"Enter Employee ID: ";
	cin>>eid;
	cout<<"Enter Designation: ";
	cin>>des;
	cout<<"Enter age: ";
	cin>>age;
	cout<<"Enter Salary: ";
	cin>>salary;
}

void emp::putData()
{
	int i;
	cout<<"\nDisplaying Employee Details..."<<endl;
	for(i = 0; i<5;i++)
	{
		cout<<"Employee ID: "<<eid<<endl;
		cout<<"Designation: "<<des<<endl;
		cout<<"Age: "<<age<<endl;
		cout<<"Salary: "<<salary<<endl;
	}
}

void emp::avgSal(emp obj[])
{
	int sum = 0, avg, i;
	for(i = 0; i<5;i++){
		sum+=obj[i].salary;
	}
	avg = sum/5;
	cout<<"The Average Salary is: "<<avg<<endl;
}

void emp::heightSal(emp obj[])
{
	int max = obj[0].salary, i;
	for(i = 0; i<5;i++){
		if(max < obj[i].salary)
		{
			max = obj[i].salary;
		}
	}
	cout<<"The Height Salary is: "<<max<<endl;
}

int main()
{
	emp e[5];
	int i, sum =0, avg;
	for(i = 0; i<5;i++)
	{
		e[i].getData();
	}
	for(i = 0; i<5;i++)
	{
		e[i].putData();
	}
	e[0].avgSal(e);
	e[0].heightSal(e);
	
	return 0;
}
