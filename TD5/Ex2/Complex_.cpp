#include <iostream>
#include <cmath>

#include "Complex_.hpp"

Complex Complex::max;

Complex::Complex() {
  real = 0.0;
  imaginary = 0.0;
}

Complex::Complex(double real, double imaginary) {
  this->real = real;
  this->imaginary = imaginary;
  setMax();
}

double Complex::getReal() {
  return real;
}

double Complex::getImaginary() {
  return imaginary;
}

void Complex::setReal(double re) {
  real = re;
  setMax();
}

void Complex::setImaginary(double im) {
  imaginary = im;
  setMax();
}

double Complex::magnitude() {
  return std::sqrt(std::pow(real, 2) + pow(imaginary, 2));
}

void Complex::normalize() {
  double magnitude_val = magnitude();

  if (magnitude_val != 0) {
    real = real / magnitude_val;
    imaginary = imaginary / magnitude_val;
  }
  setMax();
}

Complex::~Complex() {
  std::cout << "Destroying number " << real << " + " << imaginary << " * i" << std::endl;
}

void Complex::setMax(){
  if (magnitude() > max.magnitude())
  {
    max.real = real;
    max.imaginary = imaginary;
  }
}

void Complex::printMaxComplex(){
  std::cout << "Complex with max magnitude is: ("
            << max.getReal() << ","
            << max.getImaginary() << ")" << std::endl;
}

Complex Complex::fromMax(){
  return max;
}