
#include<iostream>
#include<vector>
using namespace std;

// Finding Roots using binary search
int findRoot(int n){
    int start=0;
    int end=n-1;
    int mid=start+(end-start)/2;
    int ans=-1;
    while(start<=end){
        if(mid*mid == n){
           return mid;
        }
        else if(mid*mid > n){
            
            end=mid-1;
        }
        else{
            ans=mid;
            start=start+1;
        }
        
       mid=start+(end-start)/2;
    }
    return ans;
}

int main() {
    int n;
    cout<<"Enter the no : "<<endl;
    cin>>n;

    int root=findRoot(n);
    cout<<"Root is : "<<root<<endl;
    double precision;
    cout<<"Enter a precision value : "<<endl;
    cin>>precision;


    double finalAns=root;
    int step=0.1;
    for(double i=0; i<precision; i++){
        for(double j=finalAns ; j*j<=n; j=j+step ){
            finalAns=j;
        }
        step=step/10;
    }
    cout<<"value with precision : "<<finalAns<<endl;
    return 0;
}






// Finding peak element using binary search
int findPeak(vector<int>arr){
     int start=0;
    int end=arr.size()-1;
    int mid=start + (end - start)/2;
    int ans=0;
    while(start<end){
        if(start == end){
            return start;
           
        }
        if((arr[mid] > arr[mid+1] && arr[mid]>arr[mid-1]) || 
        (arr[mid] > arr[mid  + 1])){
            return  ans= mid;
            end=mid-1;
        }
        else if(arr[mid] < arr[mid-1]){
            end=mid-1;
        }
        else if((arr[mid] > arr[mid-1])||(arr[mid]<arr[mid+1])){
           start=mid+1;
        }
        mid=start + (end - start)/2;
    }
  
}


int main(){
    vector<int>arr{2,1};
    int ans=findPeak(arr);
    cout<<"Ans is: "<<endl;
    cout<<ans;
}
// First occurance
int findTaragr(vector<int>arr, int target){
    int start=0;
    int end=arr.size()-1;
    int mid=start + (end - start)/2;
    int ans=-1;
    while(start<=end){
        if(arr[mid] == target){
            ans=mid;
            end=mid-1;
        }
        else if(arr[mid] < target){
            start= mid+1;

        }
        else{
            end=mid-1;
        }
        mid=start + (end - start)/2;
    }
    return ans;
}

// last occurance 
int findTarget(vector<int>arr , int target){
     int start=0;
    int end=arr.size()-1;
    int mid=start + (end - start)/2;
    int ans=-1;
    while(start<=end){
        if(arr[mid] == target){
            ans=mid;
            start=mid+1;
        }
        else if(arr[mid] > target){
            end=mid-1;
            
        }
        else{
            start=mid+1;
        }
        mid=start + (end - start)/2;
    }
    return ans;
}


int main(){
    vector<int>arr{2,3,4,4,4,4,4,4,4,4,4,5,5,5,6};
    int target=5;
    int ans=findTaragr(arr,target);
    cout<<"First Occ index is : " <<ans <<endl;
    cout<<"First Occ index is : " <<arr[ans]<<endl;
    int lastAns=findTarget(arr,target);
    cout<<"last Occ index is : " <<lastAns <<endl;
    cout<<"last Occ index is : " <<arr[lastAns]<<endl;;
    int totalOcc= lastAns - ans + 1;
    cout<<"Total Occ : "<<totalOcc<<endl;
}

//Taking neagative elements oneside
int main(){
    vector<int>arr{2,-3,-5,-6,10};
    int start=0;
    int end=arr.size()-1;
    while(start<=end){
        if(arr[start] <0){
            start++;
        }
        else if(arr[end]>0){
            end --;
        }
        else{
            swap(arr[start],arr[end]);
        }
    }

    for(int i=0; i<arr.size();i++){
        cout<<arr[i]<<" ";
    }

    return 0;
   
}






























int findAns(vector<int>arr){
    int start=0;
    int end=arr.size();
    int mid = start + (end-start)/2;
    while(start<=end){
        if(start == end){
            return start;
        }
        if(arr[mid] % 2 == 0  ){
            if(arr[mid] == arr[mid+1]){
                start=mid+2;
            }
            else{
                end=mid;
            }
        }
        else{
            if(arr[mid]!=0){
                if(arr[mid] == arr[mid-1]){
                    start=mid+1;
                }
                else{
                    end=mid-1;
                }
            }
        }
        mid=start+(end - start)/2;
    }

}

int main(){
    vector<int>arr{1,1,2,2,3,3,4,4,5,5,6,6,7,8,8,9,9,10,10};
    int ans=findAns(arr);
    cout<<"This is the index" <<ans<<endl;
    cout<<"This is the value"<<arr[ans];
    return 0;
}

