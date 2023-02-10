
#include <iostream>
#include <string>
using namespace std;

class Player{ //Create a class which contain informations about players 
  private: //Set the data in the class as public
    int age;
    string name;
    float height;
    int number;
  public: //Set the functions in the class as private
    void read();
    void write();
    Player() {};
    Player(string name, float height, int number, int age){
        this->age = age;
        this->height= height;
        this->name= name;
        this ->number= number;}};

void Player::read(){ //Create a function referenced in 'Player' class that receive the informations
    cout<<"Name: "; cin>> name;
    cout<<"Height: "; cin>> height;
    cout<<"Number: "; cin>> number;
    cout<<"Age: "; cin>> age;}

void Player::write(){ //Create a function that print the informations received
    cout<< "Name: "<<name<<" | Number: "<<number<<" | Height: "<<height<<" | Age: "<<age<< endl;}

int main(){
    Player S2("Carlos",1.76,12,24);
    S2.write();
    return 0;}