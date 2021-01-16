/** 
 * -=-<[ Bismillahirrahmanirrahim ]>-=-
 * Date    : 2021-01-09 07:05:13
 * Author  : Dahir Muhammad Dahir (dahirmuhammad3@gmail.com)
 * About   : Compile with g++
 */

#include <iostream>

using namespace std;

void update(int *a, int *b);

int main(){
    int a, b;

    cin >> a >> b;

    int *a_pointer = &a;
    int *b_pointer = &b;

    update(a_pointer, b_pointer);

}

void update(int *a, int *b){
    int sum = *a + *b;
    int abs_difference = abs(*a - *b);
    *a = sum;
    *b = abs_difference;

    cout << *a << "\n";
    cout << *b << "\n";

}
