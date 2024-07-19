#include<iostream>
#include<limits.h>
#include<vector>
#include<algorithm>
using namespace  std;

 vector<int> luckyNumbers(vector<vector<int>>matrix){
    vector<int>ans;
    int row=matrix.size();
    int col=matrix[0].size();
    int index=0;
    for(int i=0; i<row; i++){
        int min=INT_MAX;
        for(int j=0; j<col; j++){
            if(matrix[i][j] < min ){
                min=matrix[i][j];
                index=j;
            }
          
        }
        bool isTrue= true;
        for(int j=0; j<row ; j++){
            if(matrix[j][index] > min){
                isTrue=false;
                break;
            }
        }
        if(isTrue){
            ans.push_back(min);
        }
    }
    
    return ans;
 }

int main(){
    vector<vector<int>>matrix{
        {3,7,8},
        {9,11,13},
        {15,16,17},
        
    };

    vector<int>ans = luckyNumbers(matrix);
    for(int i=0; i<ans.size(); i++){
        cout<<ans[i];
    }
}
