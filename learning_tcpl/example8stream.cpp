/** 
 * @Date    : 2020-04-06 13:21:17
 * @Author  : Dahir Muhammad Dahir (dahirmuhammad3@gmail.com)
 * @About   : Compile with g++
 */

# include <iostream>
# include <string>
using namespace std;

void print_stream(){
    int number1;
    double number2;
    string my_good_string;
    string fullstring;

    cout << "give me some string:\n";
    getline(cin, fullstring);
    cout << fullstring << "\n";

    cin >> number1;
    cout << "int num: " << number1 << "\n";

    cin >> number2;
    cout << "double num: " << number2 << "\n";

    cin >> my_good_string;
    cout << "my string: " << my_good_string << "\n";
}

int main(){
    print_stream();
}