/** 
 * -=-<[ Bismillahirrahmanirrahim ]>-=-
 * Date    : 2021-01-12 19:58:40
 * Author  : Dahir Muhammad Dahir (dahirmuhammad3@gmail.com)
 * About   : Compile with g++
 */

#include <iostream>
#include <vector>

using namespace std;


int main(){
    int n;
    cin >> n;

    vector<int> array;

    for ( int i = 0; i < n; i++) {
        int x;
        cin >> x;

        array.push_back(x);       
    }

    int my_x;

    cin >> my_x;
    array.erase(array.begin() + my_x - 1);

    int my_a, my_b;
    cin >> my_a >> my_b;

    array.erase(array.begin() + my_a - 1, array.begin() + my_b - 1);

    cout << array.size() << endl;

    for (int integer: array) {
        cout << integer << " ";
    }
}
