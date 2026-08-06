#include<iostream>
#include<vector>
using namespace std;

vector<int> funC (vector<int>& vec, int target){
    vector<int> r;
    for(int i = 0; i<vec.size(); i++){
        for(int j = i+1; j<vec.size(); j++){
            if(vec[i]+vec[j] == target){
                r.push_back(vec[i]);
                r.push_back(vec[j]);
                return r;
            }
        }
    }
    return r;
}

int main(){
    vector<int> v = {2, 7, 11, 15};
    int target = 9;
    vector<int> res;
    cout<<"pairSum: "<<endl;
    res = funC(v, target);
    for(int i=0; i<res.size(); i++){
        cout<<res[i]<<endl;
    }
    return 0;
}