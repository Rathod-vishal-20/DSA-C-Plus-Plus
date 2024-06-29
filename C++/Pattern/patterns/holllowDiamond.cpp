#include<iostream>
using namespace std;
int main(){

    int n;
    cout<< "Enter a number: ";
    cin>> n;
    for(int row = 0 ; row<n; row++){
        // spaces
        for(int col = 0 ; col<n-row-1 ; col++){
            cout<<" ";
        }
        // stars
        for(int k = 0 ; k<2*row+1 ; k++){
            // if first character aur 
           // last character print star
           if(k == 0 || k==2*row){
            cout<<"*";
           }
           else{
            cout<<" ";
           }
           
        }

        cout<<endl;
    }

    // for inverted hollow diamond 

    for(int row=0 ; row<n ; row++){
        for(int col=0 ; col<row; col++){
            cout<<" ";
        }
        for(int k =0 ; k<2*n-2*row-1; k++){
            // if first aur last character
           if(k==0 || k==2*n-2*row-1-1){
            cout<<"*";
           } 
           else{
            cout<<" ";
           }
        }
        cout<<endl;
    }

}
