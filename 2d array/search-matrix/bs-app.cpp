// binary search approach 

#include<iostream>
using namespace std;

int main(){
    int n = 4; //no. of rows
    int m = 3; //no. of columns
    int arr[4][3] = {
        {1,2,3},
        {4,5,6},
        {7,8,9},
        {10,11,12}
    };

    int key = 8;

    int start = 0;
    int end = m-1;
    for(int i = 0; i<n; i++){
        while(start<=end){
        int j = 0;
        int mid = start +end / 2;
         if(arr[i][i]>key){

         }
        }
    }
    return 0;
}
