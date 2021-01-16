/** 
 * -=-<[ Bismillahirrahmanirrahim ]>-=-
 * Date    : 2021-01-11 06:31:32
 * Author  : Dahir Muhammad Dahir (dahirmuhammad3@gmail.com)
 * About   : Compile with g++
 */

#include <iostream>
#include <string>
#include <sstream>

using namespace std;

class Student {
    private:
        int age;
        string first_name;
        string last_name;
        int standard;
    
    public:
        int get_age(){
            return age;
        }

        void set_age(int new_age) {
            age = new_age;
        }

        string get_first_name() {
            return first_name;
        }

        void set_first_name(string new_first_name) {
            first_name = new_first_name;
        }

        string get_last_name() {
            return last_name;
        }

        void set_last_name(string new_last_name) {
            last_name = new_last_name;
        }

        int get_standard() {
            return standard;
        }
        
        void set_standard(int new_standard) {
            standard = new_standard;
        }

        string to_string(){
            stringstream my_string_stream;
            string stringed;
            
            my_string_stream << age << ',' << first_name << ',' << last_name << ',' << standard;

            my_string_stream >> stringed;

            return stringed;
        }
};

int main(){
    //pass

    return 0;
}