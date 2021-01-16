/** 
 * -=-<[ Bismillahirrahmanirrahim ]>-=-
 * Date    : 2021-01-12 14:09:34
 * Author  : Dahir Muhammad Dahir (dahirmuhammad3@gmail.com)
 * About   : Compile with g++
 */

#include <iostream>

using namespace std;

class Box {
    
    private:
        int l,b,h;
    
    public:
        Box() { l = 0; b = 0; h = 0; }

        Box(int length, int breadth, int height) {
            l = length; b = breadth; h = height;
        }

        Box(Box& B) { l = B.l; b = B.b; h = B.h; }

        int getLength() { return l; }

        int getBreadth() { return b; }

        int getHeight() { return h; }

        long long CalculateVolume() { return (long long) l * b * h; }

        bool operator < (Box& box) {
            if (l < box.l) { return true; }

            if (b < box.b && l == box.l) { return true;}

            if (h < box.h && l == box.l && b == box.b) { return true; }

            return false;
        }

        friend ostream& operator << (ostream& out, Box& box) { 
            out << box.l << " " << box.b << " " << box.h;
            return out;
        }

};

int main(){
    
    //pass

    return 0;
}