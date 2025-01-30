#include<iostream>
using namespace std;

int main () {
        cout << "hello world!\n";
}
//code from here was for pair programing

#include <iostream>
#include <string>
using namespace std;
int main()
{
    std::string name;
    std::cout << "Enter your name: ";
    std::getline(std::cin, name);
    if (name == "Emma" or "Katie") {
        std::cout << "Hello, creator! <3" << std::endl;
    }
    else {
        std::cout << "Hello, " << name << "! <3" << std::endl;
    }
    
}
