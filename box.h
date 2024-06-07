#pragma once
#include<iostream>
using namespace std;

class box {
    public:

    box();
    
    box(const double newlength, const double newBreadth, const double newHeight);

    ~box();

    double GetVolume();
    void SetLength (double len);
    void SetBreadth (double bre);
    void SetHeight (double hei);

    box operator +(const box& b);

    private: 
    double length;
    double breadth;
    double height;
    
};