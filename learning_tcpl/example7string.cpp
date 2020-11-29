/** 
 * @Date    : 2020-04-06 11:04:55
 * @Author  : Dahir Muhammad Dahir (dahirmuhammad3@gmail.com)
 * @About   : Compile with g++
 */
# include <string>
# include <iostream>
using namespace std;


string compose(const string& name, const string& domain){
    return name + '@' + domain;
}

string append(const string& string1, const string& string2){
    return string1 + string2;
}

int main(){
    string address = compose("dahirmuhammad3", "gmail.com");
    cout << "Your email address is: " << address << "\n";
    string fullname = append("Dahir ", "Muhammad Dahir");
    cout << "Your Fullname is " << fullname << "\n";
}

