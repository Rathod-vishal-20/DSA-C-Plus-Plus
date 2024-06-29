#include<iostream>
using namespace std;

//     bool find(int arr[] , int size, int key){
//          for(int i=0; i<size; i++){
//             if(arr[i] == key){
            
//           return true;
//         }

        
//     }
    
//     return false;
//     }

// int main(){

//     int arr[5] = {1,3,5,7,8};
//     int size=5;

//     int key;
//     cout<<"Enter the key ";
//     cin>> key;

//     if(find(arr, size, key)){
//         cout<<"Found";
//     }
//     else{
//         cout<<"Not found"<<endl;
//     }

   
    

//     return 0;
// }

    bool findKey(int arr[],int key, int size){
         for(int i=0; i<size ; i++){
        if(arr[i] == key){
            return true;
        }
        
            
        
      
    }
    return false;
    }

int main(){
    int arr[]={2,9,6,7,12,15};
    int size=6;
    int key;
    cout<<"Enter key: ";
    cin>>key;
   
    
    if(findKey(arr,key,size)){
        cout<<"Present";
    }
    else{
        cout<<"Not Present";
    }
}