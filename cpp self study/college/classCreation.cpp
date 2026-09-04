#include<iostream>
using namespace std;
class student{
	int roll, marks;
	string name;
	public:
		void getData();
		void showData();
		void average(student);
};
void student::getData(){
	cout<<"Enter student details: "<<endl;
	cin>>roll>>name>>marks;
} 
void student::showData(){
	cout<<"Roll: "<<roll<<endl;
	cout<<"Name: "<<name<<endl;
	cout<<"Marks: "<<marks<<endl;
}
void student::average(student s2){
	cout<<"Average: "<<(this->marks+s2.marks)/2;
}
int main(){
	student obj1,obj2;
	//obj1.roll; //can not be accessed, data member is private.
	obj1.getData();
	obj2.getData();
	
	obj1.showData();
	obj2.showData();
	obj1.average(obj2);
	return 0;
}
