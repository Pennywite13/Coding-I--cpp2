//Katie M coding1 Feb 20, 2025
//Loops and lists

#include <iostream>
using namespace std;

int main(){
    cout << "welcome to week 5!\n";

    //while and do-while
    //random numbers

    cout << "what program would you like to run? \n";
    cout << "Press 1 to keep playing. \n";
    cout << "press 2 for player name. \n";

    string input;             //make a variable to store the input from the player
    getline(cin, input);      //get the input from the player

    //test input from the player
    //stoi() stands for string to int and converts it
    if (stoi(input)==1){
        cout << "lets start the keep playing program!\n";
    }
    else if (stoi(input)==2){
        cout << "Lets start the player name program. \n";
    }
    else {
        cout << "Sorry, I didnt understand that request. \n";
    }

    //lists
        //arrays (ordered list of variables)
        //vectors
    //loops
        //for loop
    //more logic
        //switch statement
        //if/elseif/else


    //starting lists segment
    string colors[4];
    colors[0] = "red";
    colors[1] = "blue";
    colors[2] = "green";
    colors[3] = "yellow";

    cout << "The first color in the array of colors is " << colors[0] << ".\n";

    // loop through all colors
    cout <<"\n Here are all the colors in the array: \n";
    int iterator = 0;                   //count starts
    while (iterator < 4){                //loop as long as theres more
        cout << colors[iterator] << "\n";       //send array elements to console
        iterator += 1;                  //add 1 to counter/itterator
    }

    //new list using player input
    cout << "who are your best friends? \n";

    //keep using string input from earlier
    string bestFriends[10];         //size of 10, must specify size in c++
    int currentElement = 0;         //points to next avalable spot in array

    do{
        cout << "Enter a name or type 'quit' to quit. \n";
        getline (cin,input);             //using cin, get input and assign to temp value

        if (input == "quit"){
            break;                      //quit is not one of their friends
        }

        bestFriends[currentElement++] = input;    //++ means after currentElement gets used, add 1

    } while(input != "quit" && currentElement <= 10);           //!= not opperatior
                                        //loop while person does not write quit and while currentelement is < 10

    //for loop start/set up (setup, test, action) then {code}
    cout << "Here are all of your best friends! \n";
    for (int i = 0; i < currentElement; i++) {
        cout << bestFriends[i] << "\n";
    }


    //in class assignment
    //create array of 33 random numbers between 1777 and 2025
    //then tell user what the highest number in array is 
    #include <ctime>
    #include <string>      
    #include <cstdlib>
    srand(time(0));

    int runTimes[33];
    int highscore = 0;
    int arraySpot = 0;
    int years[33];

    for (int i = 0; i < 33; i++) {   //keep looping through all (for loop?)
        years[i] = (rand()%(248+1)+1777);  
        cout << "One generated year is: " << years[i] << "\n"; //print years as they are made
        //years[arraySpot++] = input;   //put years in array (run times of i)

        if (years[i] > highscore){
            years[i] = highscore; //replace highscore with years
            if (i == 32){
                cout << "The largest year was " << highscore << "!\n";
            }
        }
    }











    /*
    }
    if (years > highscore){
        //replace highscore with years
        //keep looping through all (for loop?)
        //print years at end of program

    }

    */
    int min = 1777;
    int max = 2025;
    int range = max-min;
    int randomYear = (rand()%(range+1))+min;

    int randomYears[33];




    return 0;
}