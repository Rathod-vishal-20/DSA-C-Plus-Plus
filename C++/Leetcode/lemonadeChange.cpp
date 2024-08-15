#include<iostream>
#include<vector>
using namespace std;

bool lemonadeChange(vector<int>& bills){
    int fives = 0;
    int tens = 0;
    for(int i=0; i<bills.size(); i++){
        if(bills[i] == 5){
            fives++;
        }
        else if(bills[i] == 10){
            if(fives < 1) return false;
            fives--;
            tens++;
        }
        else if(bills[i] == 20){
            if(tens > 0 && fives > 0){
                fives--;
                tens--;
            }
            else if(fives >= 3){
                fives-=3;
            }
            else{
                return false;
            }
        }
    }
    return true;
}

int main(){
    vector<int>bills{5,5,10,10,20};
    bool ans = lemonadeChange(bills);
    if(ans){
        cout<<"True";
    }
    else{
        cout<<"False"<<endl;
    }
}