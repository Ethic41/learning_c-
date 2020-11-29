/** 
 * @Date    : 2020-04-06 05:42:56
 * @Author  : Dahir Muhammad Dahir (dahirmuhammad3@gmail.com)
 * @About   : Compile with g++
 */

class complex{
    double real, imaginary;
    public:
        complex(double real_part, double img_part): real{real_part}, imaginary{img_part}{
            //pass
        }
        complex(double real_part): real{real_part}, imaginary{0}{
            //pass
        }
        complex(): real{0}, imaginary{0}{
            //pass
        }

        //setters and getter
        double real() const{
            return real;
        }

        void real(double my_real){
            real = my_real;
        }

        double imaginary() const{
            return imaginary;
        }

        void imaginary(double my_imaginary){
            imaginary = my_imaginary;
        }

        complex& operator+=(complex some_complex_num){
            real += some_complex_num.real;
            imaginary += some_complex_num.imaginary;
            return *this;
        }

        complex& operator-=(complex some_complex_num){
            real -= some_complex_num.real;
            imaginary -= some_complex_num.imaginary;
            return *this;
        }

};