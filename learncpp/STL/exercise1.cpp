/** 
 * -=-<[ Bismillahirrahmanirrahim ]>-=-
 * Date    : 2021-01-13 18:55:29
 * Author  : Dahir Muhammad Dahir (dahirmuhammad3@gmail.com)
 * About   : Compile with g++
 */

#include <iostream>
#include <vector>
#include <algorithm>
//#include <string>

using namespace std;


int main() {
    int n;
    cin >> n;

    vector<int> array;

    for ( int i=0; i < n; i++ ) {
        int x;
        cin >> x;

        array.push_back(x);

    }

    int q;
    cin >> q;

    for ( int i=0; i < q; i++ ) {
        int x;
        cin >> x;
        
        vector<int>::iterator value;

        value = lower_bound(array.begin(), array.end(), x);
        string response = array[value - array.begin()] == x ? "Yes" : "No";
        cout << response << " " << value - array.begin() + 1 << endl;

    }

    return 0;
}
