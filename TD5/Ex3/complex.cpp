#include <iostream>
#include <cmath>

#include "complex.hpp"

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

Complex::~Complex() {}

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
Complex Complex::operator-(){
    return Complex(-real, -imaginary);
}
Complex Complex::operator+(const Complex &other){
    return Complex(real + other.real, imaginary + other.imaginary);
}
Complex Complex::operator-(const Complex &other){
    return Complex(real - other.real, imaginary - other.imaginary);
}
Complex Complex::operator*(const Complex &other){
    return Complex( (real * other.real) - (imaginary * other.imaginary) , (real * other.imaginary) + (imaginary * other.real));
}

bool Complex::operator==(const Complex &other){
    return (real == other.real)&&(imaginary == other.imaginary);
}
bool Complex::operator!=(const Complex &other){
    return (real != other.real)||(imaginary != other.imaginary);
}