/** 
 * Date    : 2020-11-29 06:46:43
 * Author  : Dahir Muhammad Dahir (dahirmuhammad3@gmail.com)
 * About   : Bismillahirrahmanirrahim (Compile with g++)
 */

#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(){
    vector<string> msg {"Hello C++", "World from vscode"};

    for (const string& word: msg){
        cout << word << " ";
    }

    cout << endl;
}
