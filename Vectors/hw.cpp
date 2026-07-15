#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v = {7, 8, 4, 5, 2, 1};
    //search 5
    bool found = false;
    for(int i = 0; i<v.size(); i++){
        if(v[i] == 5){
            found = true;
            cout<<v[i]<<"- was found at index: "<<i;
        }
    }                                                             
    return 0;
}