#include<iostream>
#include<vector>
using namespace std;
// optimised approach
int main(){
    vector<int> v = {2, 7, 11, 15};
    vector<int> r;
    int target = 9;
    int i = 0; 
    int j = v.size() -1;
    while(i<j){
        int sum = v[i] + v[j];
        if(sum == target){
            r.push_back(i);
            r.push_back(j);
            cout<<r[i]<<r[j];
        } else if(sum > target ){
            j--;
        } else {
            i++;
        }
    }
    return 0;
}