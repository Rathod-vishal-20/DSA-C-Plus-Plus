#include<iostream>
#include<vector>
using namespace std;
void printSolution(vector<vector<char>>&board, int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<<board[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}

bool isSafe(int row, int col,vector<vector<char>>&board, int n ){
    // checking foe the cuurent cell is a possible solution

    // check row;
    int i=row;
    int j=col;
    while(j>=0){
        if(board[i][j] == 'Q'){
            return false;
        }
        j--;
    }

    // check upper left diagonal
     i=row;
     j=col;
    while(i>=0 && j>=0){
        if(board[i][j] == 'Q'){
            return false;
        }
        i--;
        j--;
    }

    // bootom left diagonal
    i=row;
    j=col;
    while(i<n && j>=0){
        if(board[i][j] == 'Q'){
            return false;
        }
        i++;
        j--;
    }
    // kahi kar bhi queen nahi mili 
    return true;
}

void solve(vector<vector<char>>&board, int col, int n){
     if(col >= n){
       printSolution(board , n); 
       return ;
     }

     // case 1 solve karna hai..
     for(int row = 0; row<n; row++){
        if(isSafe(row,col,board,n)){
            board[row][col]='Q';
            solve(board,col+1,n);
            board[row][col]='.';
        }
        // rakh doo

     }
}

int main(){
    int n=4;
    vector<vector<char>>board(n,vector<char>(n,'.'));
    int col=0;
    vector<vector<string>>Queen;
    solve(board, col, n);
    return 0;
}
