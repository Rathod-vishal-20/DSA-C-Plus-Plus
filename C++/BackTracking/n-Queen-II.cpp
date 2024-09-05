#include<iostream>
#include<vector>
using namespace std;

    bool isSafe( vector<vector<bool>>&result, int row, int col ,int n){
        int i=row;
        int j=col;
        while(i>=0 && j>=0){
            if(result[i][j]==true){
                return false;
            }
            j--;
        }
        i=row;
        j=col;
        while(i>=0 && j>=0){
            if(result[i][j] == true){
                return false;
            }
            i--;
            j--;
        }
        i=row;
        j=col;
        while(i<n && j>=0){
            if(result[i][j]==true){
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
    void solve(int n, vector<vector<bool>>&result, int& count, int col ){
        if(col >= n){
            count++;
            return ;
        }
        for(int row=0; row<n; row++){
            
            if(isSafe(result,row,col,n)){
                result[row][col]=true;
                solve(n,result,count,col+1);
                 result[row][col]=false;
            }
        }
    }

    int totalNQueens(int n) {
        vector<vector<bool>>result(n,vector<bool>(n,false));
        int count = 0;
        solve(n,result,count,0);
        cout<<count<<endl;
        return count;
        
    }

    int main(){
        int n=4;
        int ans = totalNQueens(n);
        cout<<"Total Number of count : "<<ans;
    }
