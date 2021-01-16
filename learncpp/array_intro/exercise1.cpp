/** 
 * -=-<[ Bismillahirrahmanirrahim ]>-=-
 * Date    : 2021-01-09 15:29:25
 * Author  : Dahir Muhammad Dahir (dahirmuhammad3@gmail.com)
 * About   : Compile with g++
 */

#include <iostream>

using namespace std;

int main(){

    int n;
    cin >> n;

    int array[1000];

    for (int i = 0; i < n; i++) {
        cin >> array[i];
    }

    for (int i = n; i > 0; i--){
        cout << array[i-1] << " ";
    }

    return 0;
}
