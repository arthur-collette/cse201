#pragma once
#include "base.cpp"

class Derived : public  Base {
public: 
    double w;

    Derived(int a, int b, double c, double d);
};