#include<iostream>
#include "box.h"
using namespace std;

int main(){
    box box1;
    box box2;
    box box3;
    double Volume=0.0;

    box1.SetLength(6.0);
    box1. SetBreadth(7.0);
    box1.SetHeight(5.0);
    Volume = box1.GetVolume();
      Volume = box2.GetVolume();
    cout<<"volume of  box2 :"<<Volume<<endl;
     
     box3 = box1 + box2;

     Volume = box3 .GetVolume();
     cout<<"volume of box3 : "<<Volume<<endl;

     return 0;
}