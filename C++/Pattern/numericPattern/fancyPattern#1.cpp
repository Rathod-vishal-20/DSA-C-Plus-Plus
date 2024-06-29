#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number:";
    cin>>n;
    for(int row=0; row<n; row++){
        for(int col=0; col<n+3-row; col++){
            cout<<"*";
        }
        for(int col=0; col<row+1; col++){
           cout<<row+1;
           if(col != row){
            cout<<"*";
           }
        }
        for(int col=0; col<n+3-row;col++){
            cout<<"*";
        }
        cout<<endl;
    }   
    
}