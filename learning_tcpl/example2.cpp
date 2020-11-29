/** 
 * @Date    : 2020-03-31 15:32:55
 * @Author  : Dahir Muhammad Dahir (dahirmuhammad3@gmail.com)
 * @About   : Compile with g++
 */

#include <iostream>
using namespace std;

bool accept();
bool accept2();
bool accept3();

int main(){
    accept2();
    accept3();
}

bool accept2(){
    cout << "Do you want to proceed (y or n)? \n";
    char answer = 0;
    cin >> answer;

    switch (answer)
    {
    case 'y':
        return true;
    
    case 'n':
        return false;
    
    default:
        cout << "I'll take that for a no.\n";
        return false;
    }
}

bool accept3(){
    int tries = 1;
    cout << "in accept 3 now \n";

    while (tries < 4){
        cout << "Do you want to procedd (y or n)?\n";
        char answer = 0;
        cin >> answer;

        switch (answer)
        {
        case 'y':
            return true;
        
        case 'n':
            return false;
        
        default:
            cout << "Sorry, I don't understand that.\n";
            ++tries;
        }
    }
    cout << "I'll take that for a no.\n";
    return false;
}