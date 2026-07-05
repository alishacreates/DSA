// find the smallest and largest element in array
#include<iostream>
using namespace std;

 int main(){
    int size;
    cout <<"enter the size of the array: ";
    cin>>size;
    int arr[size];
    int smallest=INT16_MAX;
    cout<<"taking inputs from array: "<<endl;
    for(int i=0; i<size; i++){
        cin>>arr[i];
    }
    // printing elements of an array
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<" the smallest number is: "<<endl;
    for(int i= 0; i<size; i++){
            if(arr[i]<smallest){
                smallest = arr[i];
            } 
    }
    cout<<smallest<<endl;
 return 0;
}

