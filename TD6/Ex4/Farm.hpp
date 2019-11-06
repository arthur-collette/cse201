#pragma once
#include <string>
#include <iostream>

class Animal {
public:
    virtual void sound();
};

class Dog : public Animal{
public : 
    Dog(std::string nm);
    void sound();
private:
    std::string name;
};

class Pig : public Animal{
public : 
    Pig(std::string);
    void sound();
private:
    std::string name;
};