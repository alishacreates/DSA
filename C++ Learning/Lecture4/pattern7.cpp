#include<iostream>
using namespace std;

// enter n: 5
// 1
// 21
// 321
// 4321
// 54321
int main(){
    int n;
    cout<<"enter n: ";
    cin>>n;
    char num='A';
    for(int i=0; i<=n-1; i++ ){
        for(int j=0; j<=i; j++){
            cout<<num;
            num++;
        }
        cout<<endl;

        
    }
    return 0;
}