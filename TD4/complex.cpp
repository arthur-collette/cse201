#include <string>
#include <iostream>
#include <cmath>

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

    double getReal(){               // get the real part of the number
        return this->real;}           
    double getImaginary(){          // get the imaginary part of the number
        return this->imaginary;}    
    void setReal(double re){        // set the value of the real part
        this->real = re;}     
    void setImaginary(double im){   // set the value of the imaginary part
        this->imaginary = im;}      
    double magnitude(){            // computes the distance from the complex origin
        return sqrt( pow(this->real,2) + pow(this->imaginary,2));}
    
    /*
    modifies the number so its magnitude becomes 1
    but it stays in the same direction from the complex origin, if possible. In other
    words, project the original number onto the unit circle. If that operation is not possible, the complex number must be left unchanged.
    */
    void normalize()
    {
        if ((this->real != 0)||(this->imaginary != 0)){
            double x = double(this->real / this->magnitude());
            double y = double(this->imaginary / this->magnitude());
            this->setReal(x);
            this->setImaginary(y);
        }
    }

};

int main() {
  Complex c1;
  Complex c2 = Complex(3,4);

  c1.normalize();

  c1.setReal(c2.getReal());
  c1.setImaginary(c2.getImaginary());

  std::cout << "c1 magnitude: " << c1.magnitude() << std::endl;
  c1.normalize();

  std::cout << "c1 is: " << c1.getReal() <<
    " + " << c1.getImaginary() << " * i" << std::endl;
  std::cout << "c1 magnitude:" << c1.magnitude() << std::endl;
}
