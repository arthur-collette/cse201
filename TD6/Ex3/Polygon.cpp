#include "Polygon.hpp"

Geometry::Polygon::Polygon(std::string lab, int a): Shape(lab){
    this->vertexCount = a;
    this->label = lab;
}

int Geometry::Polygon::getVertexCount() const{
    return this->vertexCount;
}
