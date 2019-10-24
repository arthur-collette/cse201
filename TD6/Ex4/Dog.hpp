#pragma once
#include "Animal.hpp"
#include <iostream>
#include <string>

class Dog : public Animal{
public : 
    Dog(std::string name);
    virtual void sound();
private:
    std::string name; 
};