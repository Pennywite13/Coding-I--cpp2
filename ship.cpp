#include "ship.h"
#include <iostream>


ship:: ship(){
    name = "St. Anne";
    fuel = 50;
    type = Cruiser;
}

void ship::status(){
    cout << "The good ship " << name << " has " << fuel << " fuel left .\n";
    cout << "The ships type is ";

    switch(type){
    case Fighter: cout << "fighter.\n";
        break;
    case Frigate: cout << "frigate.\n";
        break;
    case Freighter: cout << "freighter.\n";
        break;
    case Cruiser: cout << "cruiser.\n";
        break;    
    default: cout << "unknown.\n";
        break;
    }
}