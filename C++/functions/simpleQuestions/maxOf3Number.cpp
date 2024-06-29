#include<iostream>
using namespace std;

    int getMaxNum(int a, int b, int c){
        if(a > b && a>c){
            return a;
        }
        else if(b > a && b>c){
            return b;
        }
        else{
            return c;
        }
    }

int main(){

  int a;
  cout<<"Enter value of a:";
  cin>>a;
  int b;
  cout<<"Enter value of b:";
  cin>>b;
  int c;
  cout<<"Enter value of c:";
  cin>>c;
  


  int maxNumber=getMaxNum(a,b,c);
  cout<<maxNumber<<endl;
  
  return 0;

   
}