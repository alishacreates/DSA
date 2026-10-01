#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n = 3;
    int arr[3][3] = {
        {1,2,3},
        {4,5,6},
        {7,8,9},
    };
    int diagSum;
    int pdSum= 0;
    int sdSum = 0;

    // for primary diagonal
    for(int i = 0; i<n; i++){
           pdSum = pdSum + arr[i][i];
    }

    // for secondary diagonal
    for(int i = 0; i<n; i++){
        if(i!=n-i-1){
            sdSum = sdSum + arr[i][n-i-1];
        }
    }
    diagSum = pdSum + sdSum;
    cout <<diagSum<<endl;
    return 0;
}