/** 
 * -=-<[ Bismillahirrahmanirrahim ]>-=-
 * Date    : 2021-01-11 07:08:31
 * Author  : Dahir Muhammad Dahir (dahirmuhammad3@gmail.com)
 * About   : Compile with g++
 */

#include <iostream>
#include <vector>
#include <cmath>


using namespace std;

class Student {
    private:
        vector<int> scores {};
    
    public:
        void input() {
            for (int i = 0; i < 5; i++) {
                int x;
                cin >> x;
                scores.push_back(x);
            }
        }

        int calculateTotalScore() {
            int sum = 0;

            for (int i: scores) {
                sum += i;
            }

            return sum;
        }
};

int main() {
    //pass
}