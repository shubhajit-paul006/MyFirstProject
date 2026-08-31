#include <iostream>
#include <string>

using namespace std;

class Book{
	string title, author, ISBN;
	float price;
	
	public:
		Book(string title,string author, float price){
			this->title = title;
			this->author = author;
			this->price= price;
		}
		void display();
		void input();
};

void Book::display(){
	cout<<endl<<"Author: "<<author<<endl;
	cout<<"Title: "<<title<<endl;
	cout<<"Code: "<<ISBN<<endl;
	cout<<"Price: "<<price<<" only"<<endl;
}

void Book::input(){
	cout<<"Enter Book code(ISBN): ";
	cin>>ISBN;
}

int main(){
	string ISBN;
	cout<<"Welcome to BookSearch---"<<endl;
	
	Book b("C++","E. Balaguruswami",849.00);
	b.input();
	b.display();
	
	return 0;
}
