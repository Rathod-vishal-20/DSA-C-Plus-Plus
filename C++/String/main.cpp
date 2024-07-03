#include<iostream>
#include<string>
using namespace std;


bool compareString(string a , string b){
    if(a.length() != b.length()){
        return false;
    }
    else{
        int j=0;
        for(int i=0; i<a.length() ;i++){
            if(a[i] !=b[j]){
                return false;
            }
            j++;
        }
    }
    return true;

}

int main(){
    string str;
    cin>>str;
    // getline(cin,str);
    cout<<str;

    cout<<"lenght : "<<str.length()<<endl;
    cout<<"Empty : "<<str.empty()<<endl;
    str.push_back('A');


    cout<<str<<endl;

    cout<<str.substr(0,2)<<endl;

    string a="love";
    string b="lover";
   compareString(a,b);

    return 0;
}