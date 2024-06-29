#include<iostream>
using namespace std;

// void findSumRowWise(int arr[][3],int row , int col){

//     cout<<"Printing sum: "<<endl;
//     for(int i=0;i<row; i++){
//         int ans=0;
//         for(int j=0; j<col; j++){
//              ans = ans +arr[i][j] ;
//         }
//         cout<<ans;
//         cout<<endl;
//     }
// }
// void findSumColWise(int arr[][3], int row , int col){
//     cout<<"Printing col wise sum : "<<endl;
//     for(int i=0; i<row; i++){
//         int sum=0;
//         for(int j=0; j<col; j++){
//             sum =sum + arr[j][i];
//         }
//         cout<<sum <<endl;
//     }
// }

// int main(){
//     int arr[3][3];
//     int row=3;
//     int col=3;
//     cout<<"Taking input"<<endl;
//     for(int i=0; i<row; i++){
//         for(int j=0; j<col; j++){
//             cin>>arr[i][j];
//         }
//     }

//     cout<<"Printing output: "<<endl;
//       for(int i=0; i<row; i++){
//         for(int j=0; j<col; j++){
//             cout<<arr[i][j]<<" ";
//         }
//         cout<<endl;
//     }

//     findSumRowWise(arr,row , col);
//     findSumColWise(arr,row,col);

    
// }
    void findRowSum(int arr[][3], int row ,int col){
        cout<<"Printing Roew : "<<endl;
        for(int i=0; i<row; i++){
            int sum=0;
            for(int j=0; j<col;j++){
                sum= arr[i][j]  + sum;
            }
            cout<<sum<<endl;
        }
    }

    void findColSum(int arr[][3], int row ,int col){
        cout<<"Printing column : "<<endl;
        for(int i=0; i<row; i++){
            int sum=0;
            for(int j=0; j<col;j++){
                sum= arr[j][i]  + sum;
            }
            cout<<sum<<endl;
        }
    }
    int main(){
        int arr[3][3];
        int row=3;
        int col=3;
    cout<<"Taking input : ";
        for(int i=0 ; i<row; i++){
            for(int j=0; j<col ;j++){
                cin>>arr[i][j];
            }
        }
        cout<<"Printing Array : "<<endl;
         for(int i=0 ; i<row; i++){
            for(int j=0; j<col ;j++){
                cout<<arr[i][j]<<" ";
            }
        cout<<endl;
        }

        findRowSum(arr, row ,col);
        findColSum(arr, row ,col);
    }