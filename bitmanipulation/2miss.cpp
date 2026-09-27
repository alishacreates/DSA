#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector <int>nums = {1, 3, 5, 6}; //4 and 7 missing
    int N = nums.size() +2;
    int x3 = 0;
        int x1 = 0;
        int x2 = 0;
        for(int i = 0; i<nums.size(); i++){
            x1 = x1^nums[i];
        }
        for(int i= 1; i<=N; i++){
            x2 = x2^i;
        }
        x3 = x1^x2;
        x3 = x3 & ~(x3 - 1);

        int x4 = 0;
        int x5 = 0;
        for(int i = 0; i<nums.size(); i++){
           if((x3 & nums[i] )== 0){
            x4 = x4^nums[i];
           } else {
            x5 = x5^ nums[i];
           }
        }
        for(int i= 1; i<=N; i++){
            if((x3 & i)==0){
             x4 = x4^i;
            } else {
                x5 = x5^ i;
            }
        }
        cout<<x4<<" "<<x5<<endl;
        return 0;
}