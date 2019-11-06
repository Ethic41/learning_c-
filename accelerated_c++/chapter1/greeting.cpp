//ask for a person name and greet the person
#include <iostream>
#include <string>

int main(){
    // get the person name
    std::cout<<"please enter your name:\n";

    // read the name
    std::string name; // define variable name
    std::cin >> name; // read into name

    // write a greeting
    std::cout << "Hello, " << name << "!" << std::endl;
    return 0;
    
    }