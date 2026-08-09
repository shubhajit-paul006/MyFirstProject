#include<iostream>
#include<string>
using namespace std;

class Student{
	private:
		long int roll;
		string name;
		float marks;
		
		
	public:
		Student(long int roll, string name, float marks){
			this->roll = roll;
			this->name = name;
			this->marks = marks;
		}
		void displayInfo();
};

void Student::displayInfo(){
	cout<<"Roll : "<<Student::roll<<endl;
	cout<<"Name : "<<Student::name<<endl;
	cout<<"Marks : "<<Student::marks<<endl;
}

int main(){
	long int roll;
	string name;
	float marks;
	
	cout << "Enter Roll: ";
    cin >> roll;
    
    cin.ignore();
    
    cout << "Enter Full Name: ";
    getline(cin, name);
    
    cout << "Enter Marks: ";
    cin >> marks;
	Student s1(roll, name, marks);
	cout<<"Displying Student Profile--->"<<endl;
	s1.displayInfo();
	
	
	return 0;
}
