/** 
 * -=-<[ Bismillahirrahmanirrahim ]>-=-
 * Date    : 2021-01-02 07:51:01
 * Author  : Dahir Muhammad Dahir (dahirmuhammad3@gmail.com)
 * About   : Compile with g++
 */

#include <iostream>
#include <cstdio>

using namespace std;

int main(){

    int integer;
    long long_integer;
    char character;
    float float_number;
    double double_number;

    scanf("%d %ld %c %f %lf", &integer, &long_integer, &character, &float_number, &double_number);
    printf("%d\n%ld\n%c\n%f\n%lf", integer, long_integer, character, float_number, double_number);

    return 0;
}
