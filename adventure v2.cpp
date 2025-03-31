//Katie M
//coding 1 Spring 2025 functions Homework


//start homework code
#include <iostream>     // in out stream sends text to and from the console.
#include <string>       // allows us to use string variables.
#include <cstdlib>
#include <ctime>

//start of functions
//need story, askyesno, rolldie, ending, adventure
void story(){
    //use cout to print story of them getting news of an assignment
    cout << "Welcome hero! Time to start your adventure.\n";
    cout << "While resting at a tavern, you spot a job to fight some goblins. \n";
}

string AskYesNo(string givenYesNo){
    //cout << "Will you accept your found quest? \n";
    //string givenYesNo;
    //getline(cin,givenYesNo)
    //put above commented out code in main()

    if(givenYesNo == "yes"){
        cout << "Amazing! Best of luck on your adventure. \n";
        adventure(); //needs user input in parentheses. call later or in main?

    }

    if(givenYesNo == "no"){
        cout << "sometimes its best to quit while youre ahead, and prioratize safety. \n";
        ending();
    }

    else{
        cout << "That input is not reconized. \n";
        cout << "Make sure you use lowercase letters and try again. \n";
    }
}

int rollDie(){
    //make code that rolls a 6 sided die
    //should be able to copy paste previous code here
}

void ending(){
    if (playerHealth <= 0){ //player is dead
        cout << "You adventure has come to an end, but not by choice. \n";
        cout << "You die on the battlefield, leaving " << totalTreasure << "behind where you lie.\n";
    }

    else{  //player is alive
        cout << "Your adventure has come to an end.\n";
        cout << "You retire with " << totalTreasure << " treasure to your name.\n";
        //something to offically end code/break?
        //(break isnt working because not in a loop)
    }
}

bool adventure(string playerInput){
    if(playerInput == "a"){
        //code for attack
        //should call rollDie() function
        cout << "The best defence is a good offence. \n";
        cout << "You decide to attack! \n";
        //call function
        //check if number rolled hits
        //if else statement for if it hits. damage delt included
    }

    if(playerInput =="b"){
        //code for block
        //should call rollDie() function
        cout << "You decide to block an oncoming attack! \n";
        //call function
        //check if number rolled blocks
        //if else statement for if it blocks. Damage taken included
    }

    else{
        cout << "That input is not reconized. \n";
        cout << "Make sure you use lowercase letters and try again. \n";
    }
    //code that lets the player take actions
    //use numbers to let player input decisions
    //use if statements to determine number input/action wanted
    //else statement for invalid input
}

//global variables
int playerHealth = 10;
int enemy1Health = 5;
int turns = 0;
int turnsTillEnd = (rand()%6+1); //started writing code for random timer, ran out of time due to other homework
int totalTreasure = 0;

using namespace std;
int main() {
//welcome the player
    story();

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

