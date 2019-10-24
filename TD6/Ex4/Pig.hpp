#pragma once
#include "Animal.hpp"
#include <iostream>
#include <string>

class Pig : public Animal{
public : 
    Pig(std::string name);
    virtual void sound();
private:
    std::string name; 
};