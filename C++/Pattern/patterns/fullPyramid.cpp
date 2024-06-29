#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a lenght : ";
    cin >> n ;
    for(int row = 0; row< n ; row++){
        for(int col=0 ; col<n-row-1 ; col++){
            cout<<" ";
           
        }
         for(int k = 0 ; k<row+1 ; k++){
                cout<<"* ";
            }
        cout<<endl;
    }
}