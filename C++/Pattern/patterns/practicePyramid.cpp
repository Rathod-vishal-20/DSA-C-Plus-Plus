#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter a number :";
    cin >> n ;
    for(int row=0 ; row<n ; row++){
        // for spaces
        for(int col=0; col<row ; col++){
            cout<<" ";
        }
        // for the pyramid
        for(int col=0; col<n-row; col++){
            cout<<"*";
        }
        cout<<endl;
    }

    // for the next part

    for(int row=0 ; row<n ; row++){
        for(int col=0; col<n-row-1 ; col++){
            cout<<" ";
        }
        // for the start
        for(int col=0; col<row+1; col++){
            cout<<"*";
        }
        cout<<endl;
    }

}