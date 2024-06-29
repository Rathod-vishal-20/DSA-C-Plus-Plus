#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number:";
    cin>>n;
    int start=1;
    for(int row=0; row<n; row++){
        
        for(int col=0; col<row+1; col++){
            
            cout<<start;
            start=start+1;
            if(row!=col){
                cout<<"*";
            }
            
            
        }
        cout<<endl;
    }
    //  cout<<start;
    // int end=start-n;
    // for(int row=0; row<n; row++){
    //     for(int col=0; col<n-row; col++){
    //         cout<<end;
    //         end=end+1;

    //     }
    //     cout<<endl;
    // }
}