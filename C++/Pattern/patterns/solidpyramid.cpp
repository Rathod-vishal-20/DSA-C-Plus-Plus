#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number :";
    cin>> n;
    // Full pyramid
    for(int row=0; row<n; row++){
        for(int col=0 ; col<n-row-1; col++ ){
            cout<<" ";
        }
        for(int k = 0 ; k<row+1 ; k++){
            cout<<"* ";
        }
        cout<< endl;
    }

    // Inverted full pyramid
    for( int row=0 ; row<n ; row++){
        for(int col=0 ; col<row ; col++){
            cout<<" " ;
        }
        for(int k=0 ; k<n-row ; k++){
            cout<<"* ";
        }
        cout<<endl;
    }
}