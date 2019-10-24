#include "Pig.hpp"

Pig::Pig(std::string name){
    this->name = name;
}

void Pig::sound(){
    std::cout << this->name << 'says groin! groin!' << std::endl;
}

