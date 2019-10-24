#pragma once 

class Base {
public:
    int x;
    int y;
    double z;

    Base(int a, int b, double c );
};

class Derived : public  Base {
public: 
    double w;

    Derived(int a, int b, double c, double d) : Base(a, b, c);
};