#include<iostream>
#include<limits.h>
using namespace std;
void  printAll(int n){
 
    if(n == 0 ) return ;
    int digits = n % 10;
    
    printAll(n/10);
    cout<< digits <<" " ;

}

using namespace std;
int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;

 printAll(n);
}