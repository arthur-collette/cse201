#include "Farm.hpp"

void Animal::sound(){}

Dog::Dog(std::string name) {
    this->name = name;
}

void Dog::sound(){
    std::cout << name << " says \"ouaf! ouaf!\""  << std::endl;
}

Pig::Pig(std::string name){ 
    this->name = name;
}

void Pig::sound(){
    std::cout << name << " says \"groin groin!\"" << std::endl;
}


