#include<iostream>
using namespace std;

// enter n: 5
// 1
// 12
// 123
// 1234
// 12345
int main(){
    int n;
    cout<<"enter n: ";
    cin>>n;
    for(int i=0; i<=n-1; i++ ){
        for(int j=0; j<=i; j++){
            cout<<j+1;
        }
        cout<<endl;
    }
    return 0;
}