/** 
 * @Date    : 2020-03-31 20:30:21
 * @Author  : Dahir Muahammad Dahir (dahirmuhammad3@gmail.com)
 * @About   : Compile with g++
 */

#include <iostream>
using namespace std;


struct Vector{
    int size;           // number of elements
    double* elements;   // pointer to elements
};


void vector_init(Vector& vector, int size){
    vector.elements = new double[size];     // allocate an array of size double
    vector.size = size;
}

double read_and_sum(int size){
    // read size integers from cin and return their sum; size is assured to be positive
    Vector vector;
    vector_init(vector, size);      //allocate size element for vector

    for(int i=0; i != size; ++i){
        cin >> vector.elements[i];
    }

    double sum = 0;
    for(int i = 0; i != size; ++i){
        sum += vector.elements[i];
    }
    return sum;
}

int main(){
    int size = 3;
    double result = read_and_sum(size);
    cout << "the result of read and sum is: " << result << "\n";
}