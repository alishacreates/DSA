 #include<iostream>
#include<vector>
using namespace std;

int main(){
    int n = 20;
    int arr[n];
        for(int i = 2; i<= sqrt(n); i++){
            if(arr[i] == true ){
                for(int j=i^2; j<=n; j++){
                    arr[j] = false;
                }
            }
        }
        for(int i = 0; i<=n; i++){
        cout<<arr[i];
        }
    return 0;
}
