#include<iostream>
using namespace std;

int main(){
    // int arr[3][3]=
    // {{3,4,5},
    // {7,6,4},
    // {8,6,2}};
    
    // cout<<" Row Wise : " << endl;
    // // Printing row wise 
    // for(int i=0; i<3 ; i++){
    //     for(int j=0; j<3;j++){
    //         cout<<arr[i][j]<<" " ;
    //     }
    //     cout<<endl;
    // }

    // // printing column wise
    //  cout<<"column  Wise : " << endl;;
    // for(int i=0;i<3;i++){
    //     for(int j=0; j<3; j++){
    //         cout<<arr[j][i]<<" ";
    //     }
    //     cout<<endl;
    // }

    // taking input through row wise
    int arr[4][3];
    int row=4;
    int col=3;

    // for(int i=0; i<row; i++){
    //     for(int j=0; j<col ; j++){
    //         cin>>arr[i][j];
    //     }
    // }
    // // Printing output

    // cout<<"printing row wise :"<<endl;
    //    for(int i=0; i<row; i++){
    //     for(int j=0; j<col ; j++){
    //         cout<<arr[i][j] <<" ";
    //     }
    //     cout<<endl;
    // }



    /// col wise input
    for(int i=0; i<row ; i++){
        for(int j=0; j<col ; j++){
            cin>>arr[j][i];
        }
    }

    cout<<"Printing output col wise: "<< endl;
    for(int i=0; i<row ; i++){
        for(int j=0; j<col ; j++){
            cout<<arr[i][j];
        }
        cout<<endl;
    }

    return 0;
}