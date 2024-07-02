#include<iostream>
#include<string.h>
using namespace std;

int main(){
    // char n[100];

    // cout<<"Enter your name : "<<endl;
    // cin>>n;

    // cout<<"Your name is : "<<n<<" "; 

    // char name[4];
    // cout<<"Enter name : ";
    // cin>>name;
    // for(int i=0; i<4 ; i++){
    //     cout<< "index: "<<i<<" value: "<<name[i]<<endl;  
    // }

    // converting char into yhr int value
    // int value = (int)name[6];
    // cout<<"value is : "<<value<<endl;

    char ch[50];
     cin.getline(ch,2);
      cin.getline(ch,3);
      cin.getline(ch,3);
     cout<<"Full name is : "<<ch;
}