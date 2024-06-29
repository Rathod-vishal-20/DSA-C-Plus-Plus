#include<iostream>
#include<limits.h>

using namespace std;

// void getTranspose(int arr[][3], int row , int col,  int transpose[][3]){
//     for(int i=0; i<row; i++){
//         for(int j=0; j<col; j++){
//             // swap(arr[i][j], arr[j][i]);
//             transpose[j][i]=arr[i][j];
            
//         }
   
//     }
    
    
// }

// void printArray(int arr[][3] , int row , int col){
//      for(int i=0; i<row; i++){
//         for(int j=0; j<col; j++){
//             cout<<arr[i][j]<<" ";
//         }
//         cout<<endl;
//     }
// }

// int main(){
//       int arr[3][3]=
//     {{3,4,5},
//     {7,6,4},
//     {8,6,2}};
//     int row=3;
//     int col=3;
//     cout<<"Before Transpose : " <<endl;
//       for(int i=0; i<row; i++){
//         for(int j=0; j<col; j++){
//             cout<<arr[i][j]<<" ";
//         }
//         cout<<endl;
//     }
//     int transpose[3][3];
//       getTranspose(arr,row,col ,transpose);

//     cout<<"After Transpose : "<<endl;
//     printArray(transpose,row,col  );
    
   

// }

    void getTranspose(int arr[][3],int row, int col){
        cout<<"After Transpose"<<endl;
        for(int i=0; i<row;i++){
            for(int j=0 ; j<col; j++){
                cout<<arr[j][i]<<" ";
            }
            cout<<endl;
        }
    }

int main(){
      int arr[3][3]=
    {{3,4,5},
    {7,6,4},
    {8,6,2},
    };
    int row=3;
    int col=3;
    cout<<"Before Transpose : " <<endl;
      for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    getTranspose(arr,row,col);
}