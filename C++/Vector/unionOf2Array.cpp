#include<iostream>
#include<vector>
#include<limits>
using namespace std;

// int main(){


    
    
//     vector<int>arr{1,2,4,6,8,10};
//     vector<int>brr{3,4,5,6};
   
//     vector<int>ans;
//     for(int i=0;i<arr.size(); i++){
//         ans.push_back(arr[i]);
//     }
//     for(int i=0;i<brr.size(); i++){
//         ans.push_back(brr[i]);
//     }

    
    

//     for(int i=0; i<ans.size() ; i++){
//         cout<<ans[i] <<" ";
//     }
//     return 0;
// }


int main(){
//     int a;
//     cout<<"Enter Value of a: ";
//     cin>>a;
//     vector<int>arr(a);



//     for(int i=0; i<arr.size() ; i++){
//         cin>>arr[i];
//     } 

//         int b;
//     cout<<"Enter value of b: ";
//     cin>>b;
//     vector<int>brr(b);

//     for(int i = 0; i<brr.size() ; i++){
//         cin>> brr[i];
//     }

//    vector<int>crr;
//    for(int i=0 ; i<arr.size(); i++){
//     crr.push_back(arr[i]);
//    }
//    for(int i=0 ; i<brr.size(); i++){
//     crr.push_back(brr[i]);
//    }


     // removing from crr
    //  for(int i=0; i<crr.size(); i++){
    //     for(int j=1; j<crr.size(); j++){
    //         if(crr[i] == crr[j]){
                
    //         }
    //     }
    //  }


//    for(int i=0 ; i<crr.size(); i++){
//     cout<<crr[i]<<" ";
//    }


    vector<int>arr{1,2,4,6,8,10};
    vector<int>brr{3,4,5,6};
    vector<int>crr;

    for(int i=0; i<arr.size() ;i++){
        for(int j=0; j<brr.size(); j++){
            if(arr[i] == brr[j]){
                brr[j]= INT16_MIN;
                
            }
        }
    }
    for(int i=0 ; i<arr.size(); i++){
        crr.push_back(arr[i]);
        }
         for(int i=0 ; i<brr.size(); i++){
        crr.push_back(brr[i]);
        }

        for(int i=0 ; i<crr.size(); i++){
            if(crr[i] != INT16_MIN){
                cout<<crr[i]<<" ";
            }
           
            }








    return 0;



    

}