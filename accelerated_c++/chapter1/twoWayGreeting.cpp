// an example of two way greeting

#include <iostream>
#include <string>

int main(){
    std::cout << "Welcome, what is your name?" << std::endl;
    std::string name;
    std::cin >> name;

    std::cout << "Hello " + name << std::endl << "and what is your name?" << std::endl;
    std::cin >> name;
    std::cout << "hello " + name << " nice to meet you" << std::endl;
    return 0;
}