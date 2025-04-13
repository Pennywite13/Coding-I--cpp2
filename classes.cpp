#include <iostream>
#include <string>
using namespace std;

//use class keyword to make a class named "robot"
//dont forget semicoloin after curly braces
class robot{
private:           //anyone can see, call, or change
    string name;
    string phrase;  //phrases include punctuiation
    int charge = 1, maxCharge = 100, minCharge = 0;

public:
    robot(string,string, int);
    robot();

    void sayHello();

    //clamps charge to a range from 0-100 (inclusive)
    void setCharge(int givenCharge){
        if(givenCharge < 0){
            charge =0;
        } else if(charge > 100){
            charge = 100;
        }

    }

    void addToCharge(int by = 1){
        charge += by;
    }

    void changeCharge(int by = -1){
        charge += by;
        setCharge(charge);
    }

    void setName(string givenName){
        if(givenName.size() <2){
            cout << "Name is too short. \n";
            return;
        }
        else if (givenName.size() > 20){
            cout << "Name is too long. \n";
            return;
        }
        else{
            name = givenName;
        }
    }

    string getName(){
        return name;
    }

    //getters will always have a return type
    int getCharge(){
        return charge;
    }//way of getting arround charge being private

protected:
    //constructor (event begin play), has to be named same as class & doesnt have a return type
    robot(string givenName, string givenPhrase, int givenCharge){
    //robot(string givenName = "Robot", string givenPhrase = "Beep Bop", int givenCharge = 10){

        //assigns this instances variables to the given values
        name = givenName;
        phrase = givenPhrase;
        charge = givenCharge;

        //shows that constructor has run
        cout << "A new robot has been constructed!\n";
    }

    robot(){
        cout << "using the default constructor .\n";
        cout << "Please fix this in the cource code .\n";

    }

    void sayHello(){
        cout << "My name is " << name << " and my charge is " << charge << ".\n";
    }

private:     //only I can call,see, change 


};

int main (){
    cout << "Classes lesson start! \n";
    //string is a class and has variables!!!

    robot miku;     //constructor runs here
    miku.setName("Hatsune Miku");
    miku.setCharge(5);


    cout << "My robots name is " << miku.getName() << ".\n";
    cout << "I am charging them, their charge is " << miku.getCharge() << ".\n";

    miku.changeCharge(50);
    cout << miku.getName() << "'s charge is now " << miku.getCharge() << ".\n";

    robot rob("meep morp", 25);
    cout << "My new robot was expercive, does music, and their name is " << rob.getName() << " .\n";
    miku.sayHello();

    return 0;
}