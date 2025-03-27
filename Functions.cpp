#include <iostream>
#include <string>
#include <algorithm>
#include <ctime>     //for rand()
#include <cstdlib>   //for srand()
using namespace std;

//global variable and dangerous
//^^exist in all functions in this source file
//example with teacher moon example
const bool debug = false;


//functions
void sayHello(string greeting = "Greetings travler!"){ //declaring and defining a new function 
    cout << greeting << "\n";
}

void sayGoodbye(string exit = "Goodbye travler!"){
    cout << exit << "\n";
}

int tripple(int givenNumber){
    if(debug) cout << "givenNumber: " << givenNumber << ".\n";
    return givenNumber * 3;    //this is the output of the function
}

string getPlayerName (int minSize = 5, int maxSize =15){
    string input;     //to store player input
    do {
        cout << "What is your name?\n";
        getline (cin,input);

        //data verification
        if (input.size()< minSize){
            cout << "Your name needs to be at least "<< minSize <<  " charaters long. \n";
        }
        else if (input.size()> maxSize){
            cout << "Thats a whole title, not a name! \n";
            cout << "Your name needs to be less than " << maxSize +1 << " charaters long. \n";
        }
        else{
            string greeting = "Hello " + input + "!";
            sayHello(greeting);
            return input; //picks out of function and loop
        }

    }while(true);
}

//function overloading 
double tripple(double givenNumber){
    if(debug) cout << "givenNumber: " << givenNumber << ".\n";
    return givenNumber * 3;    //this is the output of the function
}

//task:
//create function that returns a random number between min and max
//ask player for a min number
//ask player for a max number
//then use function to return a random number between those numbers

/*
MY VERSION (didnt work)

int randomNumber (int givenRandom){
    string inputMin;
    string inputMax;
    cout << "Please select a minimum number for the randomizer: \n";
    getline (cin,inputMin);
    int min = stoi(inputMin); //converting
    cout << "Please select a maximum number for the randomizer: \n";
    getline (cin,inputMax);
    int max = stoi(inputMax); //converting

    if(min>max){
        cout << "Your minimum is larger than your maximum. please try again. \n ";

    }
    else{
        int range = (max -min) + 1;

        //do randomizing here using min and max variables
        int randomNumber = (rand()% range + min);

        cout << "your random number is " << randomNumber << "! \n";

    }
}
*/

//teacher version
int randomNumberInRange(int min, int max){
    if (min>= max){
        cout << "Your minimum is larger than your maximum. please try again. \n ";
            return -1;
    }

    int range = (max - min) + 1;
    return rand() % range + min;

}







int main(){
    srand(time(0));
    cout << "Welcome to week 10! \n";
    string favFoods[11];
    string input;
    int currentElement = 0;

    for (int i=0; i<3; i++){
        cout << "What is one of your favorite foods?: ";
        getline(cin,input);

        favFoods[i] = input;
    }

    cout << "Here are your favorite foods: \n";
    for (int i = 0; i < 3; i++){
        cout << favFoods[i] << ".\n";
    }

//functions start

//all functions have a return type, a name, and (input pararamaters)
//FUNCTIONS NEED TO BE OUTSIDE INT MAIN

    //call the function
    sayHello();
    sayHello("Welcome to the tavern");
    sayGoodbye();
    sayGoodbye("May the godess be with you");
    cout << "tripple of 4 is " << tripple(4) << ".\n";

    string playerName = getPlayerName(); //dont have to specify because we did in function

    cout << "tripple of 4.265 is " << tripple(4.265) << ".\n";

    //from my version
    //randomNumber();

    //class / teacher version
    string inputMin;
    string inputMax;

    cout << "Please select a minimum number for the randomizer: \n";
    getline (cin,inputMin);
    int min = stoi(inputMin); //converting
    cout << "Please select a maximum number for the randomizer: \n";
    getline (cin,inputMax);
    int max = stoi(inputMax); //converting

    cout << "Calculating a random number between " << min << " and " << max << ". \n";
    cout << "Your random number is " << randomNumberInRange(min, max) << "! \n";

    /*
    while (true){
        while (favFoods < 4){
            cout << "what is one of your favorite foods? \n";
            string input;
            getline (cin, input);
            favFoods[currentElement++] = input;
        }
        cout << "Your top three foods are : \n";
        for (int i = 0; i < currentElement; i++) {
            cout << favFoods[i] << ".\n";
            
        }

    }
    */
        
}