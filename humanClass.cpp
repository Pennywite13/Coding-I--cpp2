//Classes in C++ Homework
//April 14, 2025
//Game Tech and Coding

#include <iostream>
#include <string>
using namespace std;

class human{
    public:
    string name = "Nari"; 
    int health = 10;
    int baseDamage = 4;  
    int damage;

    void sayHello(){
        cout << name << " says hello to you! \n";
    
    };

    void setDamage(int givenDamage){
        givenDamage = baseDamage;

    };

    void setHealth(int byAmount){
        int setHealth = health;
    };

    int getHealth(){
        cout << name << "'s current health is " << health << ".\n ";
        return health;
    };

    int getBaseDamage(){
        cout << name << "'s current damage is " << baseDamage << ".\n ";
        return damage;
    };

    
        //creating the constructor
    human(string givenName, int givenHealth, int baseDamage){

        name = givenName;
        health = givenHealth;
        damage = baseDamage;

        cout << "A new human has been created! .\n";
    };

    human(){
        cout << "This is made by calling the human function.\n";
    }
    private: 
    protected:
    
};


int main(){

    //making a human with custom attrabutes
    human humanOne;
    humanOne.name = "Estrella";
    humanOne.health = 15;
    humanOne.baseDamage = 5;

    humanOne.sayHello();
    humanOne.getHealth();
    humanOne.getBaseDamage();

    //making a second human with base attrabutes
    human humanTwo;

    humanTwo.sayHello();
    humanTwo.getHealth();
    humanTwo.getBaseDamage();

    return 0;
}
