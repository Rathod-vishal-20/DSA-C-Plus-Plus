#include<iostream>
using namespace std;



    int add2Num(int a, int b){
        int result = a+b;
        return result;
    }

int main(){

  int a;
  cout<<"Enter value of a:";
  cin>>a;
     int b;
  cout<<"Enter value of b:";
  cin>>b;

    int sum=add2Num(a,b);
    cout<<"Addition result is :"<<sum;
    
}