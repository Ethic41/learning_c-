/** 
 * -=-<[ Bismillahirrahmanirrahim ]>-=-
 * Date    : 2021-01-13 20:37:49
 * Author  : Dahir Muhammad Dahir (dahirmuhammad3@gmail.com)
 * About   : Compile with g++
 */

#include <iostream>
#include <set>

using namespace std;


int main(){
    set<int> my_set;

    int queries;

    cin >> queries;

    for ( int i = 0; i < queries; i++ ) {
        int query_type, query_argument;

        cin >> query_type >> query_argument;

        if ( query_type == 1 ) {
            my_set.insert(query_argument);
        }
        else if ( query_type == 2 ) {
            my_set.erase(query_argument);
        }
        else {
            set<int>::iterator value_it  = my_set.find(query_argument);
            if ( value_it != my_set.end() ) {
                cout << "Yes" << endl;
            }
            else {
                cout << "No" << endl;
            }
        }
    }
}

