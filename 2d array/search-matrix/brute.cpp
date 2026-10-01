#include<iostream>
#include<vector>
using namespace std;

class Solution {
  public:
    bool searchMatrix(vector<vector<int>> &mat, int x) {
        bool found;
        int n = mat.size();
        for(int i = 0; i<n; i++){
            for(int j = 0; j<n; j++){
               if (x == mat[i][j]){
                   found == true;
               } else{
                   found == false;
                }
               }
            }
            return found;
            
        }
};