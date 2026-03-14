#include<iostream>
using namespace std;

//Find min Element
int main(){
    int n;
    cout<< "enter n: ";
    cin>>n;
    int arr[n];

    
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
   for(int i=n; i>=0; i++){
    cout<<arr[i]<<endl;
   }

   
    return 0;
}