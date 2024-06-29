#include<iostream>
using namespace std ;

int main(){
    int row;
    cout <<" Enter row :" ;
    cin >> row ;

    int col;
    cout <<" Enter col :" ;
    cin >> col ;



    for(int i = 0 ; i<row ; i++){
        for(int j=0 ; j<col ; j++){
            cout << " * " ;
        } 
        cout << endl;
    }
}