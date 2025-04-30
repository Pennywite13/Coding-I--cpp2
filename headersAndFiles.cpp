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

int main(){
    cout << "Lets write to some files! \n";

    readFromFile();

    writeToFile("Sylveon is the best pokemon!\n");

    return 0;
}