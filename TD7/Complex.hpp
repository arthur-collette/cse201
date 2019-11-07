#pragma once

#include <iostream>

template <typename T> class Complex{
private:
    T real;        // the real part
    T imaginary;   // the imaginary part
    static Complex max; 

public:
// construct the complex number zero
    Complex(){}

    // construct a complex number with given real and imaginary parts
    Complex(T real, T imaginary){
        this->real = real;
        this->imaginary = imaginary;
    }

    T getReal() {return real; }
    T getImaginary() {return imaginary; }

    void setReal(T re) { real = re; }
    void setImaginary(T im) { imaginary = im;}

    void print() {
        if (getImaginary() > 0){
            std::cout << getReal() << "+" << getImaginary() << "*i" << std::endl;
        }
        else{
            std::cout << getReal() << getImaginary() << "*i" << std::endl;
        }
    }
        

    Complex operator-(){
        return Complex(-real, -imaginary);
    }
    Complex operator+(const Complex &other){
        return Complex(real + other.real, imaginary + other.imaginary);
    }
    Complex operator-(const Complex &other){
        return Complex(real - other.real, imaginary - other.imaginary);
    }
    Complex operator*(const Complex &other){
        return Complex( (real * other.real) - (imaginary * other.imaginary) , (real * other.imaginary) + (imaginary * other.real));
    }

    ~Complex(){}
};
