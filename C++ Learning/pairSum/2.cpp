#include<iostream>
#include<vector>
using namespace std;
// optimised approach
int main(){
    vector<int> v = {2, 7, 11, 15};
    vector<int> r;
    int target = 9;
    int size = v.size();
    int i = 0; 
    int j = size - 1;
    while(i<j){
        int sum = v[i] + v[j];
        if(sum == target){
            r.push_back(v[i]);
            r.push_back(v[j]);
            break;
        } else if(sum > target ){
            j--;
        } else {
            i++;
        }
    }

    for(int i= 0; i<r.size(); i++){
        cout<<r[i]<<endl;
    }
    return 0;
}