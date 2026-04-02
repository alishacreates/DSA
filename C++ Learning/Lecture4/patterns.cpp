#include<iostream>
using namespace std;


/*
for n = 4;
  1
  22
  333
  4444*/
int main(){
    int n;
    cout<<"enter n: ";
    cin>>n;
    for (int i = 1; i<=n; i++ ){
        for(int j = 1; j<=n; j++){
            cout<<j;
        }
        cout<<endl;
    }
    return 0;
}