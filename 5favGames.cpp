// Katie Mansard coding1b Feb 24 2025
// 5 fav games homework

#include <iostream>
#include <string>
using namespace std;

int main() {
    while (true){

        //preping options and showing player
        cout << "Welcome to your list of games. What would you like to do?\n";
        cout << "Press 1 to add a game.\n";
        cout << "Press 2 to edit a games name.\n";
        cout << "Press 3 to remove a game.\n";
        cout << "Press 4 to view your list of games.\n";
        cout << "Press 5 to quit the program.\n";

        string input1;			// defining input from user
        getline(cin, input1);	// get the input from the player

        //making array
        string games[5]; //there can be five games, with values from 0-4s
        int currentElement = 0;	
        //seeing what the player put for input

        if (stoi(input1) == 1) { //COMPLETE
            cout << "Let's add a game to your list.\n";
            cout << "Please type the name of the game you want to add.\n";
            string addinput;
            getline (cin, addinput);
            int currentElement = 0;
            if (currentElement < 4){
                games[currentElement++] = addinput;
            }
            else {//figure out some way to say if there is a value there
                cout << "You have run out of space to add games. Please delete one to make room.\n";
            }        
        }
        else if (stoi(input1) == 2) { //COMPLETE
            cout << "Let's edit a games name.\n";
            cout << "What is the current name in our system? \n";
            string wrongName ;
            getline(cin, wrongName);

            for(int i = 0; i < 5; i++){ //looking through array
                if(games[i] == wrongName){
                    cout << "We have found that game in our system. What would you like to change it to? \n";
                        
                    string fixedName;
                    getline(cin, fixedName); //input for what it should now be called
                    swap (wrongName, fixedName); //puts fixed name into array
                }
                else { //result if input isnt in the system
                    cout << "Sorry, the game you entered doesn't seem to be on your list.\n";
                }
            }
        }
        else if (stoi(input1) == 3) {
            cout << "Let's remove a game.\n";
            cout << "What game would you like to remove? \n";
            string gameRemove;
            getline(cin, gameRemove); //getting input from user

            for(int i = 0; i < 5; i++){  //looking through array
                //code here to get rid of game user wrote
                if() {  //test if input is in list
                    //code to delete array
                }
                else {
                    cout << "Sorry, the game you entered doesn't seem to be on your list.\n";
                }
            }
        }
        else if (stoi(input1) == 4) { //COMPLETE
            cout << "Let's view your current list of games.\n";
            cout << "Your current list of favorite games are: \n";
            for (int i = 0; i < 10; i++) {
                if(games[i]==""){
                    continue; //will continue the while loop at the top
                }
                else {
                    cout << games[i] << "\n";
                }
            }
        }
        else if (stoi(input1) == 5) { //COMPLETE
            cout << "Quitting program, have a lovely day.\n";
            break;
        }
        else {  //COMPLETE
            cout << "I didn't understand that request.\n";
            continue;
        }
    }

	return 0;
}



//assignment notes from blackboard
/*
create a program that will:
1. Add a game to an array of strings
2. Edit the name of the game
3. Remove the game
4. Show the List
5. Quit
*/