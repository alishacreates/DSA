#include<iostream>
using namespace std;

int main(){
    int srow = 0;
    int scol = 0;
    int erow = 2;
    int ecol = 2;
    int mat[3][3] = {{1,2,3},
                     {4,5,6},      
                     {7,8,9}};
    // right
    for(int i= scol; i<=ecol; i++){
        cout<<mat[srow][i]<<endl;
    }
    // bottom
    for(int i = srow; i<=erow; i++){
        cout<<mat[i][ecol]<<endl;
    }
    // left
    for(int i = ecol; i>=scol; i--){
        cout<<mat[erow][i]<<endl;
    }
    // up
    for(int i = erow; i>=srow; i--){
        cout<<mat[i][scol]<<endl;
    }

    return 0;
}