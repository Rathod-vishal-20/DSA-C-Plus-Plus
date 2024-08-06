#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<int> relativeSortArray(vector<int>& arr1, vector<int>arr2){
        vector<int>ans;
        
        for(int i=0; i<arr2.size(); i++){
            for(int j=0; j<arr1.size(); j++){
                if(arr2[i] == arr1[j]  ){
                    ans.push_back(arr1[j]);
                    arr1[j] = -1;
                }
         
            }
        }
        vector<int>remain;
        for(int i=0; i<arr1.size(); i++){
            if(arr1[i] != -1){
                remain.push_back(arr1[i]);
            }
        }
        sort(remain.begin(), remain.end());

        ans.insert(ans.end(), remain.begin(), remain.end());

        for(int i=0; i<ans.size(); i++){
            cout<<ans[i]<<" ";
        }

        return ans;    
}

int main(){
    vector<int>arr1{2,3,1,3,2,4,6,7,9,2,19};
    vector<int>arr2{2,1,4,3,9,6};

    vector<int>ans = relativeSortArray(arr1,arr2);
}