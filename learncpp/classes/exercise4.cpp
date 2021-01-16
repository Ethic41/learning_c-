/** 
 * -=-<[ Bismillahirrahmanirrahim ]>-=-
 * Date    : 2021-01-13 23:27:47
 * Author  : Dahir Muhammad Dahir (dahirmuhammad3@gmail.com)
 * About   : Compile with g++
 */

#include <iostream>

using namespace std;

class Rectangle {
    
    public:
        int width, height;

        void display() {
            cout << width << " " << height << endl;
        }
};

class RectangleArea : public Rectangle {
    public:
        void read_input() {
            cin >> width >> height;
        }

        void display() {
            cout << width * height << endl;
        }
};

int main() {

}
