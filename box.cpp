#pragma once
#include "box.h"
using namespace std;

box::box() {
    length=0.0;
    breadth =0.0;
    height =0.0;
}

box::box(const double newlength ,const double newBreadth, const double newHeight){
    length = newlength;
    breadth =newBreadth;
    height =newHeight;
}

box::~box(){

}

double box::GetVolume(){
    return length * breadth * height;
}
void box::SetLength(double len){
    length =len;

}
void box ::SetBreadth(double bre){
    breadth=bre;
}
void box::SetHeight(double hei){
    height =hei;
}
box box::operator +(const box& b){
    box box;
    box.length =this->length + b.length;
    box.breadth =this->breadth + b.breadth;
    box.height = this->height + b.height;
    return box;
}