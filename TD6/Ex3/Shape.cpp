#include "Shape.hpp"


Geometry::Shape::Shape(std::string lab){
    this->label = lab;
}

void Geometry::Shape::setLabel(std::string lab){
    this->label = lab;
}

std::string Geometry::Shape::getLabel() const{
    return this->label;
}
