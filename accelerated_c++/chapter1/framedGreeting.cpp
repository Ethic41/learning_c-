// implementing greeting with frame
#include <iostream>
#include <string>

int main(){
    std::cout << "Welcome, Enter your firstname:" << std::endl;

    // declare and get name
    std::string name;
    std::cin >> name;


    const std::string greeting = "# Hello, " + name + "! #";
    const std::string stars(greeting.size(), '*');

    std::cout << stars << std::endl;
    std::cout << greeting << std::endl;
    std::cout << stars << std::endl;
    return 0;    
}