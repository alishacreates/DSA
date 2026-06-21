// calculate nCr binomial coefficient for given n and r 
// nCr = n! / r! (n-r)!

#include <iostream>
using namespace std;

int Factorial(int n){
    int fact;
    for(int i=fact; i<=n; i++){
        fact=fact*i;
    }
    return fact;
}

int main(){
    int n, r;
    cout<<"enter n: "<<endl;
    cin>>n;
    cout<<"enter r:"<<endl;
    cin>>r;
    int numerator = Factorial(n);
    int denominator = Factorial(r) * Factorial(n-r);
    int binCoef;
    binCoef = numerator / denominator;
    cout<<"the binary coefficient is: "<<binCoef<<endl;
    return 0;
}
