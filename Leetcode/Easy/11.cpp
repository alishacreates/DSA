#include<iostream>
using namespace std;
class Solution {
public:
    int maxArea(vector<int>& height) {
        int w=0;
        int h=0;
        int a = 0;
        int maxW= 0;
        for(int i = 0; i<height.size(); i++){
            for(int j = i+1; j<height.size(); j++ ){
                w = j-i;
                h = min(height[i], height[j]);
                a = w*h;
                maxW = max(maxW, a);
            }
        }
        return maxW;
    }
};