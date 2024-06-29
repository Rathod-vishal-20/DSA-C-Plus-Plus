#include<iostream>
#include<vector>
using namespace std;

int main(){
  vector<int>arr{2,0,2,1,1,0};
  int size=arr.size();
  int start=0;
  int mid=0;
  int end=size-1;
  int zeros=0;
  int ones=0;
  int twos=0;

while(start<=end){
  if(arr[mid]==0){
    swap(arr[start],arr[mid]);
    start++;
    mid++;
  }
  else if(arr[mid] ==1){
    
   mid++;
  }
  else{
    if(arr[mid]==2){
      swap(arr[mid],arr[end]);
      end--;
    }
  }
}

  // for(int i=0; i<size; i++){
  //   if(arr[i]==0){
  //     zeros++;
  //   }
  //   else if(arr[i]==1){
  //     ones++;
  //   }
  //   else{
  //     twos++;
  //   }
  // }
  // cout<<"Ones :" <<ones<<"Twos:"<<twos<<"zeros:"<<zeros;


  // int i=0;

  //  while(zeros--){
  //     arr[i]=0;
  // i++;
  //   }
  //   while(ones--){
  //     arr[i]=1;
  //     i++;
  //   }
  //   while(twos--){
  //     arr[i]=2;
  //     i++;
    
  // }
  for(int i=0; i<size; i++){
    cout<<arr[i];
  }
}