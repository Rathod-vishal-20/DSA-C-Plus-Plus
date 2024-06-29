#include<iostream>
using namespace std ;

int main() {
    int i , j;

    for(  i = 0 ; i<3 ; i++){
        if(i == 0 || i == 2){
            for( j= 0 ; j< 5 ; j++){
                cout << "* ";
            }
        }
        else{
            cout<<"* ";
            for( j = 0 ; j<3 ; j++){
                cout<< "  ";
            }
            cout<<"* ";
        }
        cout<< endl;
        
    }

    // cout << "second pattern " << endl;
    // for(int i = 0 ; i<5 ; i++){
    //     if(i==0 || i==4){
    //         for(int j=0 ; j<5 ; j++){
    //             cout << "* ";
    //         }
            
    //     }
    //     else{
    //         cout<< "* ";
    //         for(int j = 0 ; j<3 ; j++){
                
    //              cout << "  ";
            
    //         }
    //         cout<<"* ";
    //     }
    //      cout << endl;
    // }

//     int colCount , rowCount ;
//     cin >> rowCount;
//     cin>> colCount;
    
//     for (int row = 0 ; row < rowCount ; row++){
//         if(row == 0 || row== rowCount-1){
//              for(int col = 0 ; col<colCount ; col++){
//                 cout<<"* ";
//             }
//         }
//         else{
//             cout << "* ";
//             for(int col = 0 ; col<colCount-2 ; col++){
//                 cout<<"  ";
//             }
//             cout<<"* ";
//         }
//         cout<< endl;
//     }
    
 }