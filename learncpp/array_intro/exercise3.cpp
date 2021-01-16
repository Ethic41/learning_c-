/** 
 * -=-<[ Bismillahirrahmanirrahim ]>-=-
 * Date    : 2021-01-12 19:21:20
 * Author  : Dahir Muhammad Dahir (dahirmuhammad3@gmail.com)
 * About   : Compile with g++
 */

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


int main(){
    
    int n;
    cin >> n;

    vector<int> array;

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        array.push_back(x);
    }

    sort(array.begin(), array.end());

    for (int integer: array) {
        cout << integer;
        cout << " ";
    }

    return 0;
}