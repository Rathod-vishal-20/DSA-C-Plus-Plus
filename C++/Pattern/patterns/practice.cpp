#include<iostream>
using namespace std;
int main(){
    int n ;
    cout<<"Enter a number:";
    cin>> n;
    // for(int i =0 ; i<n ; i++){
    //     for(int j = 0; j<n+2 ; j++){
    //         cout<<"*";
    //     }
    //     cout<< endl;
        
//     }
    // for(int row = 0 ; row<n ; row++){
    //     if(row == 0 || row==n-1){
    //         for(int col=0; col<n+2 ; col++){
    //             cout<<"*";
    //         }
    //     }
    //     else{
    //         cout<<"*";
    //         for(int col=0; col<n ;col++){
    //             cout<<" ";
    //         }
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }

    // for(int row=0; row<n ; row++){
    //     for(int col=0 ; col<n-row-1 ; col++){
    //         cout<<" ";
    //     }
    //     for(int col = 0; col<row+1 ; col++){
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }

    // for(int row=0; row<n ; row++){
    //     for(int col=0 ; col<n-row-1 ; col++){
    //         cout<< " ";
    //     }
    //     for(int col=0 ; col<row+1; col++){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }
    // for(int row=0; row<n ; row++){
    //     for(int col=0; col<row+1; col++){
    //         cout<<" ";
    //     }
    //     for(int col=0 ; col<n-row-1; col++){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }

    // for(int row=0; row<n; row++){
    //     for(int col=0; col<row; col++){
    //         cout<<" ";
    //     }
    //     for(int col=0; col<n-row ; col++){
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }

    // for(int row=0 ; row<n ; row++){

    //     for(int col=0; col<n-row-2; col++){
    //         cout<<" ";
    //     }
    //     if(row!=n-1){
    //         for(int col=0; col<row+2; col++){
    //         cout<<"*";
    //     }
    //     }
        
    //     cout<<endl;
    // }
    // for(int row=0; row<n; row++){
    //     for(int col=0; col<row+1 ; col++){
    //         cout<<row+1;
    //         if(col !=row){
    //             cout<<"*";
                
    //         }
    //     }
    //         cout<<endl;
    //     }

    // for(int row=0; row<n ; row++){
    //     for(int col=0; col<n-row; col++){
    //         cout<< n-row;
    //         if(col != n-row-1){
    //             cout<<"*";
    //         }
    //     }
    //     cout<<endl;

    // }

    for(int row=0 ;row<n ; row++){
        int col=0;
        for( col=0; col<row+1; col++){
            int ans = col+1;
            char ch = ans + 'A' -1;
            cout<<ch;
        }

        for(int col=row; col>=1 ; col--){

            int ans= col;
            char ch= ans + 'A' - 1;
            cout<< ch;
        }

        cout<<endl;
    }

    


 }