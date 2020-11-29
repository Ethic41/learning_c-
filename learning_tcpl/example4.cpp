/** 
 * @Date    : 2020-03-31 21:12:19
 * @Author  : Dahir Muhammad Dahir (dahirmuhammad3@gmail.com)
 * @About   : Compile with g++
 */

class Vector{
    private:
        double* elements;       // pointer to the elements
        int size;               // the number of elements
    
    public:
        Vector(int size):
            elements {new double[size]}, size {size}{} // contsturctor a Vector

            double& operator[](int i){
                return elements[i];
            }

            int size(){
                return size;
            }
};
