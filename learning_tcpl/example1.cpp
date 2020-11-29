/** 
 * @Date    : 2020-03-31 08:34:29
 * @Author  : Dahir Muhammad Dahir (dahirmuhammad3@gmail.com)
 * @About   : Compile with g++
 */

# include <iostream>
using namespace std;

double square(double num){
    return num * num;
}

void print_square(double num){
    cout << "the square of " << num << " is " <<  square(num) << "\n";
}

int main(){
    print_square(1.234);
}
