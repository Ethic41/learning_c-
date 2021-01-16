/** 
 * -=-<[ Bismillahirrahmanirrahim ]>-=-
 * Date    : 2021-01-10 21:46:49
 * Author  : Dahir Muhammad Dahir (dahirmuhammad3@gmail.com)
 * About   : Compile with g++
 */

#include <sstream>
#include <iostream>
#include <vector>

using namespace std;

vector<int> parseInts(string str){
    stringstream my_stream(str);

    int integer;
    char delimiter;

    vector<int> array_of_integers;

    for ( int i = 0; i < 100000000; i++ ) {
        if ( my_stream >> integer ) {
            array_of_integers.push_back(integer);
            my_stream >> delimiter;
        }
        else {
            break;
        }

    }

    return array_of_integers;
}

int main(){
    string str;
    cin >> str;

    vector<int> integers = parseInts(str);

    for (int i: integers){
        cout << i << "\n";
    }

    return 0;
}
