#include<iostream>
using namespace std;

void ReverseArray(int arr[], int size){
    int start = 0;
    int end = size-1;
    while(start < end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}
int main(){
    int arr[6] = {4, 2, 8, 1, 2, 5};
    ReverseArray(arr, 6);
    for(int i = 0; i<6; i++){
        cout<<arr[i];
    }
    cout<<endl;
    return 0;
}