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
    char character = 'A';
    for (int i = 0; i<=n; i++ ){
        for(int j = 0; j<i+1; j++){
            cout<<i+1 ;
        }
        cout<<endl;
    }
    return 0;
}