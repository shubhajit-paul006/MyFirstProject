// The Lifecycle Tracker (Constructors & Destructors)
// Goal: Understand when objects are created and destroyed.

// Task: Create a class called Player that takes a std::string name in its constructor 
// and prints "[Name] has entered the game!". 
// Add a destructor that prints "[Name] has left the game!". 
// In main(), create a couple of players inside a nested scope block {} 
// and watch the order in which they are destroyed.
#include <iostream>
#include <string>

class Player{
    private:
        std::string name;

    public:
        Player(std::string name){
            this->name=name;
            std::cout<<name<<" has entered the game!"<<std::endl;
        }

        ~Player(){
            std::cout<<name<<" has  left the game!"<<std::endl;
        }
};

int main(){
    Player p1("Rahul");
    Player p2("Shubhajit");
    return 0;
}