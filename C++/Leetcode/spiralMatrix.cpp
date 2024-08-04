#include<iostream>
#include<vector>
using namespace std;
void spiralMatrix(vector<vector<int>>matrix){
    vector<int>ans;
    int m=matrix.size();
    int n=matrix[0].size();
    int totalElement = m*n;
    int count=0;

    int startRow=0;
    int endRow=m-1;
    int startCol=0;
    int endCol=n-1;

    while(count<totalElement){
        for(int i=startCol; i<=endCol && count<totalElement; i++){
            cout<<matrix[startRow][i]<<" ";
            count++;
        }
        startRow++;
    
        for(int i=startRow ; i<=endCol && count<totalElement;i++){
            cout<<matrix[i][endCol]<<" ";
            count++;
        }
        endCol--;
    
        for(int i=endCol ; i>=startCol && count<totalElement; i--){
            cout<<matrix[endRow][i]<<" ";
            count++;
        }
        endRow--;
        

        for(int i=endRow ; i>=startRow && count<totalElement; i--){
            cout<<matrix[i][startCol]<<" ";
            count++;
        }
        startCol++;

    }
  
}

int main(){
    vector<vector<int>>arr{
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12},
        {13,14,15,16}
    };
    spiralMatrix(arr) ;
}


