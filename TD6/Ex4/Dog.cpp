#include "Dog.hpp"

Dog::Dog(std::string name){
    this->name = name;
}

void Dog::sound(){
    std::cout << this->name << 'says ouaf! ouaf!' << std::endl;
}

