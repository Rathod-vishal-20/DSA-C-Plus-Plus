#include<iostream>
#include<vector>
using namespace std;




//  int findUnique(vector<int>arr){
//     int ans =0;
//     for(int i=0;i<arr.size(); i++){
//         ans = ans ^ arr[i];
//     }
//     return ans;
//  }

   
// int main(){

//     int n;
//     cout<<"Enter value of n : ";
//     cin>>n;

//     vector<int>arr(n);
//     cout<<"Enter the elements" << endl;
//     for(int i=0; i<arr.size() ; i++){
//         cin>>arr[i];
//     }

//     int uniqueElement= findUnique(arr);
//     cout<<"Unique element is : " <<uniqueElement << endl;


//     return 0;

    



// }

int main(){
    vector<int>arr{1,2,3,4,5,3,1,4,2};
    vector<int>brr;
    int ans=0;
    for(int i=0; i<arr.size(); i++){
        ans = ans ^ arr[i];
    }
    cout<<ans; 
}
