#include<iostream>
using namespace std;

int main(){
    int arr[2][3] = {
    {10, 20, 30},
    {40, 50, 60}
};

arr[0][2];  // Row 0, column 2 → 30
arr[1][0] ; // Row 1, column 0 → 40
arr[1][1];  // Row 1, column 1 → 50
    return 0;
}