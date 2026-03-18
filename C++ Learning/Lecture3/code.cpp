#include<iostream>
using namespace std;

int main(){
    //sum of odd numbers from 1 to n
    int sum = 0;
    int n;
    cout<<"enter n:"<<endl;
    cin>>n;
    for(int i= 1; i<=n; i++){
        if(i%2!=0){
        sum = sum+i;
        } else {
            continue;
        }
    }
    cout<<"sum is:"<< sum <<endl;
    return 0;
}