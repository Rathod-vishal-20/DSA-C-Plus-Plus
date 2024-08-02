#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;

     void rotate(vector<vector<int>>&matrix){
        int row= matrix.size();
        int col= matrix[0].size();
       
        for(int i=0; i<row; i++){
            for(int j=i; j<col ; j++){
                swap(matrix[i][j],matrix[j][i]);
            }
            cout<<endl;
        }
        for(int i=0; i<row; i++){
            int start=0;
            int end=row-1;
            while(start<end){
                swap(matrix[i][start] , matrix[i][end]);
                start++;
                end--;
            }
        }
        for(int i=0; i<row; i++){
            for(int j=0; j<col ; j++){
                cout<<matrix[i][j]<<" ";
            }
            cout<<endl;
        }
        

     }
int main(){
    vector<vector<int>>matrix{
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };

    rotate(matrix);
}