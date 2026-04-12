#include<iostream>
using namespace std;

//    1   
//   121   
//  12321
int main(){
    int n;
    cout<<"enter n:";
    cin>>n;
    for(int i=0; i<=n-1; i++){
        for(int k=n-1; k>=i; k--){
            cout<<" ";
        }
        for(int j=1; j<=i+1;j++){
            cout<<j;
        }
        for(int j=i; j>0; j--){
            cout<<j;
        }
        cout<<endl;
    }
    
    return 0;
}