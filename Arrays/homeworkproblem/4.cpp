// waf to print intersection of 2 arrays

#include <iostream>
using namespace std;

int main(){
    int arr1[5] = {1, 2, 3, 4, 5};
    int arr2[3] = {4,5,9};

    for(int i=0; i<5; i++){
        for(int j= 0; j<3; j++){
            if(arr1[i] == arr2[j]){
                cout<<arr1[i]<<" ";
            } 
        }
    }
    return 0;
}