/** 
 * @Date    : 2020-03-31 21:44:00
 * @Author  : Dahir Muhammad Dahir (dahirmuhammad3@gmail.com)
 * @About   : Compile with g++
 */

class Vector{
    private:
        double* elements;
        int size;
    
    public:
        Vector(int size);
        double& operator[](int i);
        int size();
};