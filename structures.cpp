#include <iostream>
#include <string>
#include <vector>
using namespace std;

enum enemyType{Grunt, Miniboss, Boss};

//POD structures
//custom variable type

struct enemy {
    int health = 10;//the = is just setting a default, you can still assign new values
    int damage = 4;
    string name = "Enemy";
    enemyType type = Grunt;

};

struct address{
    string streetName;
    int streetNumber;
    string city;
    string state;
    int zipCode;
};

struct employee{
    int id = 0;
    string name;
    int age;
    //string address
    address addr;       //structs can hold other structs
    float wage;

};

string AddressOneLine(address addr){
    string oneLine;
    oneLine += to_string(addr.streetNumber);
    oneLine += " " + addr.streetName;
    oneLine += ", " + addr.city;
    oneLine += ", " + addr.state;
    oneLine += ", " + to_string(addr.zipCode); //converting into to string so variable types play nice

    return oneLine;
}

int main(){
    cout << "Structures! \n";

    enemy chonk; //chonk will have their own health, damae, name, and type
    //chonk.health = 10; removed becauase same as base
    //chonk.damage = 4;
    chonk.name = "Evil kitty";
    //chonk.type = Grunt;

    cout << "Heres " << chonk.name << "! Its health is " << chonk.health << ".\n";

    enemy cat;
    cat.damage = 6;
    cat.name = "Wiwiwi cat";

    cout << cat.name << " is attacking " << chonk.name << "!\n";

    if(chonk.health < 1){
        cout << chonk.name << " has been killed! \n";
    } else {
        cout << chonk.name << " has " << chonk.health << " health left!\n";
    }

    vector<enemy> enemies;

    enemies.push_back(chonk);
    enemies.push_back(cat);

    cout << "Status of all enemies: \n";
    for(int i =0; i<enemies.size(); i++){
        cout << enemies[i].name << " has " << enemies[i].health << " health.\n";
        cout << "Their damage is " << enemies[i].damage << " and their type is "; 
        switch (enemies[i].type) //only tests once, unlike if/else/elseif
        {
        case Grunt:
            cout << "Grunt";
            break; //break stops it from printing out all names
        case Miniboss:
            cout << "Mini-boss";
            break;
        case Boss:
            cout << "Boss";
            break;
        default:
            cout << "unknown";
            break;
        }
        cout << ".\n";
    }

    employee katie;
    katie.id =1234;
    katie.name = "Katie M";
    katie.age = 20;
    katie.wage = 7.50f;
    katie.addr.streetNumber = 1234;
    katie.addr.streetName = "Main street";
    katie.addr.city = "Townsville";
    katie.addr.state = "WA";
    katie.addr.zipCode = 67890;

    cout << katie.name << " lives at " << AddressOneLine(katie.addr) << ".\n";



    return 0;
}