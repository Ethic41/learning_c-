/** 
 * -=-<[ Bismillahirrahmanirrahim ]>-=-
 * Date    : 2021-01-10 22:59:47
 * Author  : Dahir Muhammad Dahir (dahirmuhammad3@gmail.com)
 * About   : Compile with g++
 */

#include <iostream>
#include <string>

using namespace std;

int main(){
    string a, b;
    cin >> a >> b;

    cout << a.length() << " " << b.length() << "\n";
    cout << a + b << "\n";
    
    string a_swapped = a;
    a_swapped[0] = b[0];

    string b_swapped = b;
    b_swapped[0] = a[0];

    cout << a_swapped << " " << b_swapped << "\n";

    return 0;
}

