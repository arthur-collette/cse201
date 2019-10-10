#include <string>
#include <iostream>

class Complex {
private:
  double real;        // the real part
  double imaginary;   // the imaginary part

  public:
    // construct the complex number zero
    Complex(){
        this->real = 0;
        this->imaginary = 0;
    }

    // construct a complex number with given real and imaginary parts
    Complex(double real, double imaginary){
        this->real = real;
        this->imaginary = imaginary;
    }

    ~Complex(){
        std::cout << "Destroying number" << this->real << "+" << this->imaginary << "*i" << std::endl;

    }
};

int main()
{
    Complex a;
    Complex b(3,0);
    Complex c(1,2);
}
