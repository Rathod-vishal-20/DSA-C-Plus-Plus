#include<iostream>
using namespace std;

bool findKey(int arr[][3], int row , int col,int key){
       for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
        if(arr[i][j] == key){
            return true;
        }
            

               
            
        }
      
    }
    return false;
}

int main(){
    int arr[3][3];
    int row=3;
    int col=3;
    //
    cout<<"Taking input: "<<endl;
    for(int i=0;i<row;i++){
        for(int j=0; j<col; j++){
            cin>>arr[i][j];

        }
    }

    cout<<"Printing output: "<<endl;
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    int key;
    cout<<"Enter key: ";
    cin>>key;

    findKey(arr, row , col , key);

    if(findKey(arr,3,3,key)){
        cout<<"True";
    }
    else{
        cout<<"False";
    }

}
