//kMansard coding 1b spring 2025
//Recap day!

#include <iostream>
#include <string>
#include <ctime>     //for rand()
#include <cstdlib>   //for srand()
#include <vector>    //for vectors
#include <algorithm>
using namespace std;

int main(){
    srand(time(0)); //seeding random number generator 
    bool debug = false;      //debug if off unless creator is running it

    cout << "Hello, welcome to recap day! <3 \n";
    cout << "What is your name? \n";
    string input;
    getline (cin,input);
    if (input=="Katie"){
        cout << "Hello creator! \n";
        debug =true;
        if (debug) cout << "Debug mode in ON. \n";
    }
    else{
        cout << "Hello " << input << "!\n";
    }

    if (false){ //can change to true if you want it to run
        int theNumber = (rand()%10+1); //generatiting random number between 1-10
        if (debug) cout << "The number is " << theNumber << ".\n";
        int guess = 0;

        while (guess != theNumber){
            cout << "Lets play higher or lower! \n";
            cout << "I have a selected a number from 1-10. What do you think it is? \n";
            string input;
            getline (cin,input);
            guess = stoi(input);

            if (guess == theNumber){
                cout << "Wow! Your guess isnt higher or lower, it IS the number! \n";
                cout << "Congratulations!\n";
                break;
            }
            if (guess > theNumber){
                cout << "Your guess is higher than the number! \n";

            }
            else {
                cout << "Your guess is lower than the number! \n";

            }
        }
    } // end of if false
    if (true){
        //talk about vectors start

        //use a collection initalizer when creating a new vector/array to automatically add items
        vector<string> favBooks; // = { "Michael Vey", "Alex Rider", "The Art and Making of Arcane" };
        favBooks.push_back("Michael Vey");
        favBooks.push_back("Alex Rider");
        favBooks.push_back("The Art and Making of Arcane");


        cout << "The third book in my list of fav books is: " << favBooks[2]<< ".\n";
        cout << "please add another book to the list. \n";
        getline (cin,input);

        favBooks.push_back(input);   //adds a new element to end of vector

        cout << "There are now " << favBooks.size() << " books in the list.\n";
        cout << "The last book in the list is " << favBooks[favBooks.size()-1] << ".\n";

        //useful stuff with vectors, after push_back and variable size
        //is include <algorythm> for .find() and .sort() and .shuffle()

        cout << "Here is the unsorted list:\n";
        for (int i =0; i<favBooks.size(); i++){
            cout << favBooks[i]<<"\n";
        }
        cout << "Lets sort the list! \n";
        sort(favBooks.begin(),favBooks.end()); //sorts alphabetically 

        cout << "Here is the sorted list:\n"; 
        for (int i =0; i<favBooks.size(); i++){
            cout << favBooks[i]<<"\n";
        }

        cout << "Randomly shuffling the list: \n";
        random_shuffle(favBooks.begin(), favBooks.end());

        cout << "Here is the shuffled list:\n"; 
        for (int i =0; i<favBooks.size(); i++){
            cout << favBooks[i]<<"\n";
        }

        cout << "if you give me the name of a book, I will find its position in the list! \n";
        getline (cin,input);
        vector<string> ::iterator iter;        //new type of variable called iterator
        iter = find(favBooks.begin(),favBooks.end(),input);

        if (iter != favBooks.end()){
            cout << *iter << ".\n";
        }
        else{
            cout << "This book is not in your list.\n";
        }

        //out of time for c++ part of day, teach doesnt have a good way to show us how to get number without being overly complex


    }

}
