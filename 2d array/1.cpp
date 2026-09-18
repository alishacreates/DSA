#include<iostream>
using namespace std;

int main(){
    int arr[3][4];
    int n = 3;
    int m = 4;
    cout<<"enter the elements: "<<endl;
    for(int i = 0; i<=n-1; i++){
        cout<<i+1<<" row"<<endl;
        for(int j = 0; j<=m-1; j++){
            cin>>arr[i][j];
        }
    } 

    cout<<" the elements are: "<<endl;
    for(int i = 0; i<=n-1; i++){
        cout<<i<<" row"<<endl;
        for(int j = 0; j<=m-1; j++){
            cout<<arr[i][j]<<" ";
        }
    }
    return 0;
}