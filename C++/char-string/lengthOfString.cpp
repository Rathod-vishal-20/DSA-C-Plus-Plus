#include<iostream>
#include<string.h>
using namespace std;

int getLength(char ch[]){
    int lenght=0;
    int i=0;
    
    while(ch[i] != '\0'){
        lenght++;
        i++;
    }
    return lenght;


}


int main(){
char ch[100];
cout<<"Enter name : ";
cin.getline(ch,100);
cout<<"Full Name is :" <<ch <<endl;;

 int length= getLength(ch);
cout<<"Length is : "<<length<<endl;

cout<<"length"<<strlen(ch)<<endl;
}