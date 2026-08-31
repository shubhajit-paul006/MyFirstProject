#include <iostream>

using namespace std;

class Rectangle{
	float length;
	float breadth;
	
	public:
		void Input(float, float);
		void Display();
		void Area();
		void Perimeter();
};

void Rectangle::Input(float length, float breadth){
	Rectangle::length = length;
	Rectangle::breadth = breadth;
}

void Rectangle::Display(){
	cout<<"Length -> "<<this->length<<endl;
	cout<<"Breadth -> "<<this->breadth<<endl;
}

void Rectangle::Area(){
	cout<<"Area of the Rectangle -> "<<this->length * this->breadth<<endl;
}

void Rectangle::Perimeter(){
	cout<<"Perimeter of the Rectangle-> "<<2*(this->length + this->breadth)<<endl;
}

int main(){
	float length, breadth;
	Rectangle r;
	
	cout<<"Enter Length: ";
	cin>>length;
	
	cout<<"Enter Breadth: ";
	cin>>breadth;
	
	r.Input(length, breadth);
	r.Display();
	r.Area();
	r.Perimeter();
	
	return 0;
}

