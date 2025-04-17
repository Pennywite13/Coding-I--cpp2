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

    void setHealth(int givenHealth){
       health = givenHealth;
    };

    int getHealth(){
        cout << name << "'s current health is " << health << ".\n ";
        return health;
    };

    int getBaseDamage(){
        cout << name << "'s current damage is " << baseDamage << ".\n ";
        return damage;
    };

    void changeHealth(int by =1){
        int tempHealth = health;
        tempHealth += by;
        setHealth(tempHealth);
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

class magicalGirl : public human{     //making child fighter of parent human
    public:
        int sparkles;

        void transformation(){
            cout << name << " transforms in a wave of sparkles! \n";
        }

        void attack(human& target){   //& says dont clone, just points to the target (keeps the same person)
            cout << "The magical girl " << name << " has attacked " << target.name << "!\n";
            int halfOfTargetHealth = target.getHealth() /2;
            target.changeHealth(-halfOfTargetHealth);
            //target.changeHealth(-(target.getHealth()/2)); //divides target by two
        }
};

class villian : public human{     //making child fighter of parent human
    public:
        int darkness;

        void darkCover(){
            cout << name << " covers the area in darkness! \n";
        }
};


//create another child class of human


int main(){

    magicalGirl ace;
    ace.name = "Mace";
    ace.sayHello();
    ace.transformation();
    cout << "Magical girls go brrrrrr \n";

    villian statue;
    statue.name = "The Otherworldly Statue";
    statue.sayHello();
    statue.darkCover();
    cout << "Oh no! Villian stuff! \n";


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

    ace.attack(statue); 
    statue.getHealth();

    return 0;
}
