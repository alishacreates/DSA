#include<iostream>
using namespace std;
int main(){
    // n=4
    int n=4;
    for(int i=0; i<=n-1; i++){
        for(int j=i; j>0; j--){
            cout<<"_";
        }
        cout<<"*";
        
        cout<<endl;

    }
    return 0;
}