/** 
 * -=-<[ Bismillahirrahmanirrahim ]>-=-
 * Date    : 2021-01-08 19:01:51
 * Author  : Dahir Muhammad Dahir (dahirmuhammad3@gmail.com)
 * About   : Compile with g++
 */

#include <iostream>

using namespace std;

int main(){
    int input_num;
    cin >> input_num;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    if (input_num == 1){
        cout << "one";
    }
    
    else if (input_num == 2){
        cout << "two";
    }

    else if (input_num == 3){
        cout << "three";
    }

    else if (input_num == 4){
        cout << "four";
    }

    else if (input_num == 5){
        cout << "five";
    }

    else if (input_num == 6){
        cout << "six";
    }

    else if (input_num == 7){
        cout << "seven";
    }

    else if (input_num == 8){
        cout << "eight";
    }

    else if (input_num == 9){
        cout << "nine";
    }

    else {
        cout << "Greater than 9";
    }

    return 0;

}
