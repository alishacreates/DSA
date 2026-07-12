// waf to calculate sum and products of all numbers in an array

#include <iostream>
using namespace std;

void SumandProduct(int arr[], int size ){
    int sum =0;
    int prod= 1;
    for(int i =0; i<size; i++){
       sum = sum +arr[i] ;
       prod = prod*arr[i];
    }
    cout<<" sum is: "<<sum<<endl;
    cout<<" product is: "<<prod<<endl;
}
int main(){
    int arr[4] = {1, 2, 3, 4};
    int size = 4;
    cout<<"The sum and product of the given array is"<<endl;
    SumandProduct(arr, size);

    return 0;
}