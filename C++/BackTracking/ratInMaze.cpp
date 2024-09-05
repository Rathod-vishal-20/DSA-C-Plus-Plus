#include<iostream>
#include<vector>
using namespace std;

bool isSafe(int i, int j, int rows, int col, int arr[][3], 
    vector<vector<bool>>&visited){
        if( (i>=0 && i<rows) &&
        (j>=0 && j<col) &&
        (arr[i][j] == 1 ) && (visited[i][j] == false)){
            return true;
        }
        else{
            return false;
        }
    }
void solveMaze(int maze[3][3], int rows,int col, int i, int j, 
    vector<vector<bool>>&visited, vector<string>&path,string output){
        if(i == rows - 1 && j == col -1){
            path.push_back(output);
            return ;
        }

        // Down 
        if(isSafe(i+1, j, rows, col, maze, visited)){
            visited[i+1][j]=true;
            solveMaze(maze,rows,col,i+1,j,visited,path,output+'D');
            visited[i+1][j]=false;
        }
        //left
          if(isSafe(i, j-1, rows, col, maze, visited)){
            visited[i][j-1]=true;
            solveMaze(maze,rows,col,i,j-1,visited,path,output+'L');
            visited[i][j-1]=false;
        }
        //right
         if(isSafe(i, j+1, rows, col, maze, visited)){
            visited[i][j+1]=true;
            solveMaze(maze,rows,col,i,j+1,visited,path,output+'R');
            visited[i][j+1]=false;
        }

        // up
           if(isSafe(i-1, j, rows, col, maze, visited)){
            visited[i-1][j]=true;
            solveMaze(maze,rows,col,i-1,j,visited,path,output+'U');
            visited[i-1][j]=false;
        }



    }
int main(){
    int maze[3][3] = { {1,0,0},
                        {1,1,0},
                        {1,1,1}};

    int rows=3;
    int col=3;
    if(maze[0][0] == 0){

        cout<<"No path exist";
        return 0;
    }
    vector<vector<bool>>visited(rows,vector<bool>(col,false));
    visited[0][0]=true;
    vector<string>path;
    string output = " ";
    solveMaze(maze,rows,col,0,0,visited, path, output);

    cout<<"Printing results : "<<endl;
    for(auto i:path){
        cout<<i<<" ";
    }
    cout<<endl;

    if(path.size() == 0){
        cout<<"No path exist "<<endl;
    }
}
