/** 
 * -=-<[ Bismillahirrahmanirrahim ]>-=-
 * Date    : 2021-01-09 06:32:08
 * Author  : Dahir Muhammad Dahir (dahirmuhammad3@gmail.com)
 * About   : Compile with g++
 */

#include <iostream>

using namespace std;

int max_of_four(int a, int b, int c, int d){
    if (a > b && a > c && a > d){
        return a;
    }

    else if (b > a && b > c && b > d){
        return b;
    }

    else if (c > a && c > b && c > d){
        return c;
    }

    else {
        return d;
    }
}

int main(){
    int a, b, c, d;

    cin >> a >> b >> c >> d;

    cout << max_of_four(a, b, c, d);

    return 0;
}
