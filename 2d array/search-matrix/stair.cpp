// staircase approach 

#include<iostream>
using namespace std;

int main(){
    int matrix[4][4] = { {10, 20, 30, 40},
                         {15, 25, 35, 45},
                         {27, 29, 37, 48},
                         {32, 33, 39, 50} };
    int n = 4;
    int m = 4;
    bool found = false;
    int row =0;
    int col =m-1;
    int key = 33;
    while(row<n && col>=0){
        int cell = matrix[row][col];
        if(cell == key){
            found = true;
            break;
        } else if(cell<key){
            row++;
        } else {
            col--;
        }
    }

    cout<<found<<endl;
    return 0;
}