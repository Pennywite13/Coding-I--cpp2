#include "filez.h"

//week 14 coding I, reading and writing to files

#include <iostream>
#include <string>
#include <fstream>         //file stream. to read and write to files
using namespace std;

void writeToFile(string givenString){
    //open (or create) the file
    ofstream file("file.txt", ios::app);    //ios::app part will update instead of overwrite

    //confirm the file is open (early return if not open)
    if(!file.is_open()){
        cout << "Could not open file.\n";
        return;
    }
    //write text to open file
    file << givenString;

    //close file (shich saves it to disk)
    file.close();

}

void readFromFile(){
    string fileContents;     //where we store the text in the file


    //open the file
    ifstream file("file.txt");

    //check that its open
    if(!file.is_open()){
        cout << "Could not open file.\n";
    }

    //cout everything in file
    while(getline(file, fileContents)){
        cout << fileContents << "\n";
    }

    //close the file
    file.close();

}

void writeShipToFile(ship givenShip){
    cout << "writing " << givenShip.name << " to file.\n";

    ofstream file("ship2.txt", ios::app);  

    if(!file.is_open()){
        cout << "Could not open file.\n";
        return;
    }

    file << givenShip.name << "\n";
    file << givenShip.fuel << "\n";

    switch(givenShip.type){
        case Fighter: file << "fighter.\n";
            break;
        case Frigate: file << "frigate.\n";
            break;
        case Freighter: file << "freighter.\n";
            break;
        case Cruiser: file << "cruiser.\n";
            break;    
        default: file << "unknown.\n";
            break;
        }
    
    file.close();

}


/*
    Files we'll use tody

    1. headersAndFiles.cpp     //entry point for rest of program
    2. filez.h
    3. filez.cpp
    4. ship.h
    5. ship.cpp

    the headder file just has the #includes and the finction declerations
    the sourse file (.cpp) will have the function definitions
*/