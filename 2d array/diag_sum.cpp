#include<iostream>
#include<vector>

int main(){
    int n = 10;
    int arr[n][n];
    int diagSum;
    int pdSum= 0;
    int sdSum = 0;

    // for primary diagonal
    for(int i = 0; i<n; i++){
        for(int j = i; j<n; j++){
           pdSum = pdSum + arr[i][j];
        }
    }

    // for secondary diagonal
    for(int i = 0; i<n; i++){
        for(int j = (n-i-1); j>=0; j--){
            sdSum = sdSum + arr[i][j];
        }
    }

    return 0;
}