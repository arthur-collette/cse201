#include <iostream>
#include <cmath>
#include "Complex.hpp"


Complex::Complex(){
    this->real = 0;
    this->imaginary = 0;
}

// construct a complex number with given real and imaginary parts
Complex::Complex(double real, double imaginary){
    this->real = real;
    this->imaginary = imaginary;
}

Complex::~Complex(){
    std::cout << "Destroying number" << this->real << "+" << this->imaginary << "*i" << std::endl;
}

double Complex::getReal(){               // get the real part of the number
    return this->real;}           
double Complex::getImaginary(){          // get the imaginary part of the number
    return this->imaginary;}    
void Complex::setReal(double re){        // set the value of the real part
    this->real = re;}     
void Complex::setImaginary(double im){   // set the value of the imaginary part
    this->imaginary = im;}      
double Complex::magnitude(){            // computes the distance from the complex origin
    return sqrt( pow(this->real,2) + pow(this->imaginary,2));}
        
/*
modifies the number so its magnitude becomes 1
but it stays in the same direction from the complex origin, if possible. In other
words, project the original number onto the unit circle. If that operation is not possible, the complex number must be left unchanged.
*/
void Complex::normalize()
{
    if ((this->real != 0)||(this->imaginary != 0)){
        double x = double(this->real / this->magnitude());
        double y = double(this->imaginary / this->magnitude());
        this->setReal(x);
        this->setImaginary(y);
    }
}


