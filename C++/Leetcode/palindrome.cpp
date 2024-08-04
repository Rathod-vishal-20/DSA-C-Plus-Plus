#include<iostream>
#include<vector>
using namespace std;


bool paindrome(int n){
    int ori=n;
   int ans=0;
   while(n>0){
    int digit= n % 10;
    ans = ans*10 + digit;
    n= n/10;
   }
   cout<<"value of n :"<<ori<<endl;;
    cout<<ans<<endl;;
   if(ans == ori){
    return true;
   }
   return false;
}

int main(){
    int n;
    cout<<"Enter a number :"<<endl;;
    cin>>n;

   bool pal= paindrome(n);
    if(pal){
        cout<<"It is palindrome ";
    }
    else{
        cout<<"It is not palindrome";
    }
    
    return 0;
}