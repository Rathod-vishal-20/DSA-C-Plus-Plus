#include<iostream>
#include<vector>
using namespace std;

vector<vector<int>> generateMatrix(int& n){
    vector<vector<int>>ans(n, vector<int>(n));
    int startRow=0;
    int endRow = n-1;
    int startCol = 0;
    int endCol = n-1;
    int count =1;
    int totalCount = n*n;
    while(count<=totalCount){
        for(int i=startCol; i<=endCol && count<=totalCount; i++){
            ans[startRow][i]= count++;
        }
        startRow++;
        for(int i=startRow; i<=endCol && count<=totalCount; i++){
            ans[i][endCol]=count++;
        }
        endCol--;
        for(int i=endCol; i>=startCol && count<=totalCount; i--){
            ans[endRow][i]=count++;
        }
        endRow--;
        for(int i=endRow; i>=startRow && count<=totalCount; i--){
            ans[i][startCol] = count++;
        }
        startCol++;
    }

    return ans;

}

int main(){
    int n;
    cout<<"Enter value of n : ";
    cin>>n;

    vector<vector<int>>ans = generateMatrix(n);
    for(int i=0; i<ans.size(); i++){
        for(int j=0; j<ans[0].size(); j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
}