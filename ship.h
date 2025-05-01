#include <string>
using namespace std;

//specifies types of ships
enum shipType {Fighter, Frigate, Freighter, Cruiser};

class ship
{
    public:
    string name;
    int fuel;
    shipType type;

    ship();             // the constructor
    void status();      //equivalent to sayHello();
};