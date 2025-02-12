//Katie M
//coding 1 Spring 2025 week 3 Homework


//start homework code
#include <iostream>     // in out stream sends text to and from the console.
#include <string>       // allows us to use string variables.
#include <cstdlib>
#include <ctime>

using namespace std;
int main() {
//welcome the player
    cout << "Welcome hero! Time to start your adventure.\n";
//set up the game
//    int health = 10, attack, block, turns = 0
    int playerHealth = 10;
    int enemy1Health = 5;
    int turns = 0;
    int turnsTillEnd = (rand()%6+1); //started writing code for random timer, ran out of time due to other homework


//    seed the random number generator
    srand(time(0));
//start the loop
    while(playerHealth > 0) {
        turns +=1;
        cout << "There is a goblin! What would you like to do? \n";
        cout << "press 'a' to attack, press 'b' to block \n";
        string playerInput;
        cin >> playerInput;
        if (playerInput == "a"){
            int playerDamage = (rand()%4+1);
            cout << "Wow! Your attack did " << playerDamage << " points of damage! \n";
            enemy1Health = (enemy1Health-playerDamage) ;

            if (enemy1Health > 0){
                int enemy1Damage = (rand()%4+1);
                cout << "The goblin attacks back doing " << enemy1Damage << " points of damage to you! \n";
                playerHealth = (playerHealth-enemy1Damage) ;
            }
            else{
                cout << "You did it hero, you won the fight! \n";
                cout << "Hero, do you wish to keep playing? \n";
                string input;
                cin >> input;
                
                if (input == "yes"){
                    cout << "Time to go on another adventure! \n";
                }
                else {
                    cout << "May we see you again another time hero. \n";
                    break;
                    }
                }
        

        }
        if (playerInput == "b"){
            int playerBlock = (rand()%5);
            int enemyBlock = (rand()%5);
            if (playerBlock > enemyBlock){
                cout << "Amazing block! You took no damage. \n";
            }
            else {
                int enemyDamage = (rand()%5);
                cout << "Oh no! You shield did not block the attack. \n";
                cout << "You took " << enemyDamage << " points of damage.\n";
                playerHealth = playerHealth - enemyDamage ;
            }

        }
        /*
        else{
            cout << "Sorry, that is not a valid input. Please make sure to use lower case letters. \n";
            cout << "Now restarting game. \n";
            break;
        }
        */

    }
    if(playerHealth <= 0) {
        cout << "Oh no! The hero has been defeated! \n";
        while (true){
            cout << "Hero, do you wish to keep playing? \n";
            string input;
            cin >> input;
        
            if (input == "yes"){
                cout << "Time to go on another adventure! \n";
            }
            else {
                cout << "May we see you again another time hero. \n";
                break;
            }
         }
    }
    
}
//    add 1 to turns
//    start the encounter
//        randomly generate numbers for attack (range = 0-4) and block (range = 0-4)
//       if block is greater or equal to attack, successful block
//        otherwise, subtract attack value from health.
//        ask the player if they would like to keep adventuring. if they don't, break out of the loop.
//keep looping while health is greater than zero and fewer than 4 turns have happened
// 
//if health is greater than 0, congratulate player
//otherwise, tell the player they're dead.
