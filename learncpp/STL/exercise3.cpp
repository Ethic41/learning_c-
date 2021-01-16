/** 
 * -=-<[ Bismillahirrahmanirrahim ]>-=-
 * Date    : 2021-01-13 22:16:28
 * Author  : Dahir Muhammad Dahir (dahirmuhammad3@gmail.com)
 * About   : Compile with g++
 */

#include <iostream>
#include <map>

using namespace std;

int main() {

    int queries_count;
    cin >> queries_count;

    map<string, int> my_map;

    for ( int i = 0; i < queries_count; i++ ) {
        int query_type;
        cin >> query_type;

        if ( query_type == 1 ) {
            string student_name;
            int student_score;

            cin >> student_name >> student_score;

            my_map[student_name] += student_score;

        }
        else if ( query_type == 2 ) {
            string student_name;
            cin >> student_name;

            my_map[student_name] = 0;
        }
        else {
            string student_name;
            cin >> student_name;

            cout << my_map[student_name] << endl;
        }
    }

    return 0;
}

