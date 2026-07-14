// waf to print all the unique values in an array

#include <iostream>
using namespace std;



int main(){
    int arr[6] = {4, 3, 5, 9, 7, 3};
    for(int i = 0; i<6; i++){
        bool alreadyPrinted = false;
        for(int j = i+1; j<6; j++){
            if(arr[i]==arr[j]){
                alreadyPrinted = true;
            }
        }
        if(!alreadyPrinted){
            cout<<arr[i];
        }
    }
    return 0;
}