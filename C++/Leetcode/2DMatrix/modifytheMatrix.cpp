#include<iostream>
#include<vector>
#include<algorithm>
#include<limits.h>
using namespace std;

 vector<vector<int>> modifiedMatrix(vector<vector<int>>& matrix) {
        int row=matrix.size();
        int col=matrix[0].size();
        
        for(int i=0; i<col; i++){
            int ans= INT_MIN;
            for(int j=0; j<row; j++){
                ans = max(ans,matrix[j][i]);
                }
                for(int k=0; k<row; k++){
                    if(matrix[k][i] == -1){
                        matrix[k][i] = ans;
                    }
                }
                 
            }
        
        return matrix;
 }

int main(){
    vector<vector<int>>matrix{
        {1,4,6},
        {5,-1,9},
        {3,8,-1}
    };

    vector<vector<int>>ans = modifiedMatrix(matrix);
    for(int i=0; i<ans.size(); i++){
        for(int j=0; j<ans[0].size(); j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
}