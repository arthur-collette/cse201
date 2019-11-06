#pragma once

#include <iostream>

class Complex {
  private:
    double real;        // the real part
    double imaginary;   // the imaginary part
    static Complex max; 
    void setMax();

  public:
    // construct the complex number zero
    Complex();

    // construct a complex number with given real and imaginary parts
    Complex(double real, double imaginary);

    double getReal();
    double getImaginary();
    void setReal(double re);
    void setImaginary(double im);
    double magnitude();
    void normalize();

    static void printMaxComplex();
    static Complex fromMax();

    ~Complex();
};
