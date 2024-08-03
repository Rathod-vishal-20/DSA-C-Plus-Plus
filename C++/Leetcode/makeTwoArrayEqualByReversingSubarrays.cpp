#include<iostream>
#include<vector>
using namespace std;

bool canBeEqual(vector<int>target, vector<int>arr){
    int n =arr.size();
    int m =target.size();
    int frequency[1001] = {0};

    for(int i=0; i<n; i++){
        frequency[arr[i]]++;
    }

    for(int i=0; i<m; i++){
        frequency[target[i]]--;
    }

    for(int i=0; i<n; i++){
       if(frequency[i] != 0){
        return false;
       }
    }

    return true;
}

int main(){
    vector<int>target{1,2,3,4};
    vector<int>arr{2,4,1,3};
    bool ans = canBeEqual(target,arr);
    if(ans){
        cout<<"True";
    }
    else{
        cout<<"False";
    }

    return 0;
}