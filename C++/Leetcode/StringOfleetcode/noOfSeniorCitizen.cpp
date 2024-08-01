#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

int countSeniors(vector<string>details){
    int count =0;
    for(int i=0; i<details.size(); i++){
     string  age = details[i].substr(11,2);
     int ageInt = stoi(age);
        if(ageInt > 60){
            count++;
        }


    }
    return count;
}

int main(){
    vector<string>details{
        {"7868190130M7522"},
        {"5303914400F9211"},
        {"9273338290F4010"}
    };
    int ans = countSeniors(details);
    cout<<ans<<endl;
}