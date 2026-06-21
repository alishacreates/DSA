#include<iostream>
using namespace std;

int SumofDigits(int num, int Sum){
    int rem, quot;
    Sum=0;
    while(num<0){
    rem = num%10;
    Sum = Sum + rem;
    quot=num/10;
    num = quot;
    }
    return Sum;
}
int main(){
    int Sum = 0;
    int n;
    cout<<"enter number:";
    cin>>n;
    cout<<"the sum is: "<<SumofDigits(n,Sum);
    return 0;
}