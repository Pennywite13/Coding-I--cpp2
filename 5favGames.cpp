// Katie Mansard coding1b Feb 24 2025
// 5 fav games homework

#include <iostream>
#include <string>
using namespace std;

int main() {
    string games[5]; //there can be five games, with values from 0-4s
    int currentElement = 0;
    while (true){

        //preping options and showing player
        cout << "Welcome to your list of games. What would you like to do?\n";
        cout << "Press 1 to add a game.\n";
        cout << "Press 2 to edit a games name.\n";
        cout << "Press 3 to remove a game.\n";
        cout << "Press 4 to view your list of games.\n";
        cout << "Press 5 to quit the program.\n";

        string input;			// defining input from user
        getline(cin, input);	// get the input from the player

        //making array

        int n = sizeof(games) / sizeof(games[0]); //for remove, copy paste from online

        if (stoi(input) == 1) { //COMPLETE 
            cout << "Let's add a game to your list.\n";
            cout << "Please type the name of the game you want to add.\n";
            string addinput;
            getline (cin, addinput);
            games[currentElement++] = addinput;

        }
        else if (stoi(input) == 2) { //COMPLETE
            cout << "Let's edit a games name.\n";
            cout << "What is the current name in our system? \n";
            string wrongName ;
            getline(cin, wrongName);

            for(int i = 0; i < 5; i++){ //looking through array
                int nameCount = 5;
                if(games[i] == wrongName){
                    cout << "We have found that game in our system. What would you like to change it to? \n";
                        
                    string fixedName;
                    getline(cin, fixedName); //input for what it should now be called
                    games[i] = fixedName;
                }
                if(i+1 == nameCount){ //result if input isnt in the system
                    cout << "Sorry, the game you entered doesn't seem to be on your list.\n";
                }
            }
        }
        else if (stoi(input) == 3) { //COMPLETE
            cout << "Let's remove a game.\n";
            cout << "What game would you like to remove? \n";
            string gameRemove;
            getline(cin, gameRemove); //getting input from user

            for(int i = 0; i < 5; i++){  //looking through array
                if(gameRemove == games[i]) {  //test if input is in list
                    //code to delete array
                            n = n - 1;
                        for (int j = i; j < n; j++)
                            games[j] = games[j + 1];
                    break;
                }
                else {
                    cout << "Sorry, the game you entered doesn't seem to be on your list.\n";
                }
            }
        }
        else if (stoi(input) == 4) { //COMPLETE 
            cout << "Let's view your current list of games.\n";
            cout << "Your current list of favorite games are: \n";
            for (int i = 0; i < currentElement; i++) {
                cout << games[i] << ".\n";
                
            }
        }
        else if (stoi(input) == 5) { //COMPLETE
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