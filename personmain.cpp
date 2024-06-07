#include<iostream>
#include "person.h"
#include<string>

using namespace std;

int main (){
    person jane =person("jane",60.0f);
    person john =person("john",75.0f);
    float calculateweight();
    cout<<"total weight : "<<calculateweight()<<endl;
if ("jane" =="john"){
    cout<<"this is the same person "<<endl;

}
if ("jane" != "john"){
    cout <<"this is not the same person "<<endl;
}
if ("jane" < "john"){
    cout<<"jane is yonger than john"<<endl;

}
if ("john" >"jane" ){
    cout<<"john is older than "<<endl;
}
    return 0;
}