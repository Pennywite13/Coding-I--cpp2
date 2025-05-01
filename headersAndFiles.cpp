//week 14 coding I, reading and writing to files

#include "filez.h" //import headder file, pulling from that
#include "ship.h"

int main(){
    cout << "Lets write to some files! \n";

    readFromFile();

    writeToFile("Sylveon is the best pokemon!\n");

    ship anne;
    anne.status();

    return 0;
}

/*
    Files well use tody

    1. headersAndFiles.cpp     //entry point for rest of program
    2. filez.h
    3. filez.cpp
    4. ship.h
    5. ship.cpp

    the headder file just has the #includes and the finction declerations
    the sourse file (.cpp) will have the function definitions
*/