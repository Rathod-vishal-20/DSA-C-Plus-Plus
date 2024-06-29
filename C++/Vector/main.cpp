 #include<iostream>
 using namespace std;
 #include<vector>

 int main(){
    vector<int>arr;
    // cout<<arr.size() << endl;
    // cout<<arr.capacity()<<endl;


    // inserting the element
    arr.push_back(5);
    arr.push_back(6);
    arr.pop_back();
    for(int i=0; i<arr.size() ; i++){
        cout<<arr[i] <<" " <<endl;
    }

    int n;
    cout<<"Enter value of n : " << endl;
    cin>>n;

    vector<int>brr(n,-1);
    cout<<brr.size()<<endl;
    cout<<brr.capacity() << endl;
    for(int i=0; i<brr.size() ; i++){
        cout<<brr[i] <<" " ;
    }
    
    vector<int>crr{10,20,30};
    for(int i=0; i<crr.size() ; i++){
        cout<<crr[i] <<" ";
    }
    cout<<"Vector crr is empty or no : "<<crr.empty()<<endl;

    vector<int>drr;
     cout<<"Vector drr is empty or no : "<<drr.empty()<<endl;

 }
