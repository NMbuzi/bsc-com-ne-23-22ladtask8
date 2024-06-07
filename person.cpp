#pragma once
#include "person.h"


person::person(){
    float mWeight =0.0;
    string mFirstName =" ";
    int mAge =0;
}
person::person(string nfirstname, float neWeigth){
    mWeight=neWeigth;
     string nfirstName=mFirstName;
    int nAge=mAge;
}
person::~person(){

}
float person:: calculateweight(){
  
  return  mAge +mAge;

}

person  person :: operator +(const person & otherperson){
         person person;
         person.mWeight=mWeight + otherperson.mWeight;
       person. mFirstName=mFirstName +otherperson.mFirstName;

    return person;
}

       person person::operator ==(const person& b ){
        person b;
        mFirstName == b.mFirstName;
        return b;
       }
       person person::operator!=(const person& v ){
        mFirstName != v.mFirstName; 
        return v;
       }
       person person:: operator <(const person& j ){
        person j;
        mAge<j.mAge;
        return j;
       }
       person person :: operator >(const person& k){
        mAge> k.mAge;
        return k;
       }
        
