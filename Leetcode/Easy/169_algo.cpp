#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        // moore algorithm
        int freq = 0; int ans = 0;
        for(int i = 0; i<nums.size(); i++){
            if (freq == 0){
                ans = nums[i];
            }
             if(ans == nums[i]){
                freq++;
            } else {
                freq--;
            }
            if(freq > nums.size()/2){
                return ans;
            
            }
        }
        return ans;
    }
};