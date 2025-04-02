//Katie M
//coding 1 Spring 2025 functions Homework


//start homework code
#include <iostream>     // in out stream sends text to and from the console.
#include <string>       // allows us to use string variables.
#include <cstdlib>
#include <ctime>
using namespace std;

//global variables
int playerHealth = 10;
int enemy1Health = 5;
int totalTreasure = 0;



//start of functions
void ending(){ //all good!
    if (playerHealth <= 0){ //player is dead
        cout << "You adventure has come to an end, but not by choice. \n";
        cout << "You die on the battlefield, leaving " << totalTreasure << " gold behind where you lie.\n";
        exit(0); //ends code
    }

    else{  //player is alive
        cout << "Your adventure has come to an end.\n";
        cout << "You retire with " << totalTreasure << " treasure to your name.\n";
        exit(0); //ends code
    
    }
}

void story(){
    cout << " \n";
    cout << "Welcome hero! Time to start your adventure.\n";
    cout << "While resting at a tavern, you spot a job to fight some goblins. \n";

}

void AskYesNo(string givenYesNo){ //printing else when yes is selected


    if(givenYesNo == "yes"){
        cout << " \n";
        cout << "Amazing! Best of luck on your adventure. \n";

    }

    else if(givenYesNo == "no"){
        cout << "sometimes its best to quit while youre ahead, and prioratize safety. \n";
        ending();
    }

    //if(givenYesNo != "yes" || "no"){
    else{
        cout << "That input is not reconized. \n";
        cout << "Make sure you use lowercase letters and try again. \n";
        exit(0);
    }
}

int rollDie(){
    int diceRoll = (rand()%6+1);
    return diceRoll;
}

int rollDieEnemy(){
    int diceRollEnemy  = (rand()%6+1);
    return diceRollEnemy;

}

bool adventure(string playerInput){

    if(playerInput == "a"){

        cout << "The best defence is a good offence. \n";
        cout << "You decide to attack! \n";

        if(rollDie() <= 4){  
            int playerDamage = (rand()%4+1);
            cout << "Wow! Your attack did " << playerDamage << " points of damage! \n";
            enemy1Health = (enemy1Health-playerDamage) ;
            if (enemy1Health <= 0){
                int randomLoot = (rand()%3+1);

                cout << "You did it, you defeated the goblin! \n";
                cout << "After the battle, you find a stash of " << randomLoot << " gold hidden away. \n";
                totalTreasure = totalTreasure + randomLoot;
                
            }
            while (enemy1Health <= 0){
                continue;
            }
        }
        if (rollDie() > 4){

            int enemy1Damage = (rand()%4+1);
            playerHealth = playerHealth - enemy1Damage;

            cout << "Oh no! Your attack missed. \n";
            cout << "Your swing leaves you open and you take " << enemy1Damage << " damage. \n";
            cout << "You now have " << playerHealth << " health remaining. \n";

        }
        return playerHealth;
    }

    if(playerInput =="b"){
        cout << "You decide to block an oncoming attack! \n";
        rollDie();
        rollDieEnemy();
        if (rollDie() > rollDieEnemy()){
            cout << "Amazing block! You took no damage. \n";
        }
        else{ 
            int enemyDamage = (rand()%5);
            cout << "Oh no! You shield did not block the attack. \n";
            cout << "You took " << enemyDamage << " points of damage.\n";
            playerHealth = playerHealth - enemyDamage ;
            if (playerHealth <= 0){
                ending();
            }
        }
    }

    else{
        cout << "That input is not reconized. \n";
        cout << "Make sure you use lowercase letters and try again. \n";
    }
}



int main() {
    srand(time(0)); //seed the random number generator

//welcome the player
story();

//start the loop
    while(playerHealth > 0) {
        cout << " \n";
        cout << "Will you accept your found quest? \n";
        cout << "Please type 'yes' or 'no' \n";
        string givenYesNo;
        getline(cin,givenYesNo);
        AskYesNo(givenYesNo);

        while (givenYesNo == "yes"){
            cout << " \n";
            cout << "There is a goblin! What would you like to do? \n";
            cout << "press 'a' to attack, press 'b' to block \n";
            string playerInput;
            cin >> playerInput;

            adventure(playerInput); //pulls player input and runs adventure function

        }

        /*
        NOTES
        -not continuing (or giving option to) once you defeat one goblin.
        -code also isnt ending natrually and needs to be force quit with ^c once goblin 1 is defeated
        
        
        */

    
    }
}
