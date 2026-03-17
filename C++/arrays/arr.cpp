#include<iostream>
using namespace std;

//Find min Element
int main(){
    int n;
    cout<< "enter n: ";
    cin>>n;
    int arr[n];

    cout<<"enter elements"<<endl;
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
    cout<<"array in reverse: "<<endl;

    for(int i=n-1; i>=0; i--){
    cout<<arr[i]<<endl;
   }
    return 0;
}