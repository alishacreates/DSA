#include<iostream>
using namespace std;
// optimal two pointers
class Solution {
public:
    int maxArea(vector<int>& height) {
        int size = height.size();
        int left=0;
        int right = size-1;
        int h=0;
        int w=0;
        int maxC = 0;
        while(left<right){
            h = min(height[left], height[right]);
            w = right - left;
            int current = h*w;
            maxC = max(current, maxC);
            if(height[left]<height[right]){
                left++;
            } else {
                right--;
            }
        }
        return maxC;
    }
};