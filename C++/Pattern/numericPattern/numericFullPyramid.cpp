#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number:";
    cin>>n;
    for(int row=0; row<n; row++){
        for(int col=0 ; col<n-row-1; col++){
            cout<<" ";
        }
        int start = row+ 1;
        for(int col=0; col<row+1; col++){
            cout<<start;
            start = start+1;
            
        }
        int end= 2 * row  ;
        for(int col=0; col<row; col++){
            cout << end;
            end = end - 1;
            // end = end + 1;
        }
        cout<<endl;
    }
}