#include<iostream>
using namespace std ;

// int main(){
//     int n ;
//     cin >> n;
//     for(int row = 0 ; row<n; row++){
//         for(int col = 0 ; col < n-row ; col++){
//             cout<<"*";

//         }
//         cout<<endl;
//     }

      


// }


//  int main(){
//     // int n ;
//     // cin >> n;
//       for(int i = 0 ; i<6 ; i++){
//         for(int j = 0 ; j<6-i ; j++){
//             cout<< "*" ;

//         }
//         cout<<endl;
//     }
//  }

int main(){
    int n;
    cin >> n ;
    for(int row = 0 ; row< n ; row++){
        for(int col = 0 ; col < n-row ; col++){
            cout<< " " ;
        }
        for( int k =0 ; k<row+1 ; k++){
            cout<< "*";
        }
        cout<<endl;
    }
}















