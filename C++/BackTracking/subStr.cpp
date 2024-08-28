#include<iostream>
#include<vector>
using namespace std;


void printParmutation(string& str, int i){
    if( i >= str.size()){
        cout<<str <<" ";
    }
    for(int j=i; j<str.size(); j++){
        swap(str[i],str[j]);
        printParmutation(str, i+1);

        swap(str[i],str[j]);
    }


}

int main(){
    string str="abc";

    int i=0;
    printParmutation(str,i); 

}