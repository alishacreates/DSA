#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int freq=0;
        int res;
        for(int i = 0; i<nums.size(); i++){
            for(int j = 0; j<nums.size(); j++){
                if(nums[i] == nums[j]){
                    freq++;
                }
            }
            
            if(freq>nums.size()/2){
            res = nums[i];
         }
        }
        return res;
    }
};