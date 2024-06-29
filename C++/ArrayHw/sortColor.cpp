#include<iostream>
#include<limits.h>
#include<vector>
using namespace std;


int main(){
   vector<int>arr{2,0,1,0,1,2,0,1,0};
    int zeros=0;
    int ones=0;
    int twos=0;



    for(int i=0; i<arr.size() ;i++){
        if(arr[i] == 0){
            zeros++;
        }
        else if(arr[i] == 1){
            ones++;
        }
        else{
            twos++;
        }
    }
    cout<<"The Zeros count is :" <<zeros<<endl;
     cout<<"The Ones count is :" <<ones<<endl;
      cout<<"The Twos count is :" <<twos<<endl;


      
      int i=0;
      while(zeros --){
        arr[i]=0;
        i++;
      }
        while(ones --){
        arr[i]=1;
        i++;
      }
        while(twos --){
        arr[i]=2;
        i++;
      }
      // output
      for(int i=0; i<arr.size(); i++){
        cout<<arr[i]<<" ";
      }

   //Sorting in place using pointer
     
    int low=0;
    int high=arr.size()-1;
    int med=0;
   while ( med <= high){
      if(arr[med] == 0){
        swap(arr[low],arr[med]);
        low++;
        high++;
      }
      else if(arr[med] == 1){
        med++;
      }
      else{
        if(arr[med] == 2){
          swap(arr[med],arr[high]);
          high--;
        }
      }
   }
   
   for(int i=0; i<arr.size(); i++){
         cout<<arr[i]<<" ";
       }


  
}