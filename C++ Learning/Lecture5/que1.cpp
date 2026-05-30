#include<iostream>
using namespace std;

//function for calculating sum of n numbers
int Sum(int n, int Sum){
    for(int i=0; i<=n; i++){
        Sum = Sum+i;
    }
    return Sum;
}

int main(){
    int sum=0;
    int num;
    cout<<"enter n: ";
    cin>>num;
    cout<<Sum(num,sum)<<endl;
    return 0;
}