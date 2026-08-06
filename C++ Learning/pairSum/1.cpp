#include<iostream>
#include<vector>
using namespace std;

int f (vector<int>& r, int target){
    vector<int> vec;
    for(int i = 0; i<vec.size(); i++){
        for(int j = i+1; j<vec.size(); j++){
            if(vec[i]+vec[j] == target){
                r.push_back(vec[i]);
                r.push_back(vec[j]);
            }
        }
    }
}

int main(){
    vector<int> v = {2, 7, 11, 15};
    int target = 9;
    
    return 0;
}