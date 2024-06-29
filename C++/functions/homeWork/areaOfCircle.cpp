#include<iostream>
using namespace std;


    
   float getAreaOfCircle(float r){
        float area= 3.14*r*r;
        return area;
    }

int main(){
    float r;
    cout<<"Enter a radius: ";
    cin>>r;
    float area=getAreaOfCircle(r);
    cout<<"Area of circle is :" << area << endl;;

    return 0;
}