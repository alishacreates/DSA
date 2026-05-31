#include<iostream>
using namespace std;

int Factorial(int n, int fact){
    for(int i=fact; i<=n; i++){
        fact=fact*i;
    }
    return fact;
}
int main(){
    int num;
    int factorial=1;
    cout<<"enter n: ";
    cin>>num;
    cout<<"factorial of "<<num<<" is: "<<Factorial(num, factorial)<<endl;
    return 0;
}