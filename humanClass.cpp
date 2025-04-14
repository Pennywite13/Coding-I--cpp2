//Classes in C++ Homework
//April 14, 2025
//Game Tech and Coding

#include <iostream>
#include <string>
using namespace std;

class human{
    public:
    string name; 
    int health;
    int baseDamage;  
    int damage;

    void sayHello(){
        cout << name << " says hello to you! \n";
    
    };

    void setDamage(int givenDamage){
        givenDamage = baseDamage;

    };

    //void setHealth(int byAmount){
    //    int setHealth = health + givenDamage;
    //};

    int getHealth(){
        cout << name << "'s current health is " << health << ".\n ";
        return health;
    };

    int getBaseDamage(){
        cout << name << "'s current damage is " << baseDamage << ".\n ";
        return damage;
    };

    private: 
    protected:
    /*
        //creating the constructor
        human(string givenName, int givenHealth, int baseDamage){

            name = givenName;
            health = givenHealth;
            damage = baseDamage;

            cout << "A new human has been created! .\n";

            
        }
    */
};


int main(){
    cout << "This is the begining of the code. \n";

    human humanOne;
    humanOne.name = "Estrella";
    humanOne.health = 15;
    humanOne.baseDamage = 5;

    humanOne.sayHello();
    humanOne.getHealth();
    humanOne.getBaseDamage();

    return 0;
}




/*
INCLUDE FOR ASSIGNMENT

-string Name
-int Health = 10
-int Damage = 4
a Constructor with parameters for name, health, baseDamage
-void SayHello()
void SetHealth(int byAmount)
void SetDamage(int givenDamage)
-int GetHealth()
-int GetDamage()

*/