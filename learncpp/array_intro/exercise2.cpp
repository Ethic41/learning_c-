/** 
 * -=-<[ Bismillahirrahmanirrahim ]>-=-
 * Date    : 2021-01-09 23:21:44
 * Author  : Dahir Muhammad Dahir (dahirmuhammad3@gmail.com)
 * About   : Compile with g++
 */

#include <iostream>
#include <vector>

using namespace std;

int main(){
    int number_of_array, number_of_queries;

    cin >> number_of_array >> number_of_queries;

    vector<vector<int>> root_array {};

    for (int i = 0; i < number_of_array; i++) {
        int k;
        vector<int> child_array {};

        cin >> k;

        for (int j = 0; j < k; j++){
            int input_item;
            cin >> input_item;

            child_array.push_back(input_item);
        }

        root_array.push_back(child_array);
    }

    for (int i = 0; i < number_of_queries; i++) {
        int root_index, child_index;

        cin >> root_index >> child_index;

        cout << root_array[root_index][child_index] << "\n";
    }

    return 0;
}

