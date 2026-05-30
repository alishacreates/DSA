#include<iostream>
using namespace std;
int main(){
    // n=4
    int n=4;

        for(int i = 0; i<=n-1; i++){
             for(int j=i; j<n-1; j++){
                cout<<"_ ";
              }
            for(int k=0; k<=n-1; k++){
              cout<<"* ";
              k=n;
            }
             for(int j=0; j<i; j++){
                cout<<"_ ";
              }
            
            cout<<endl;
        }
    return 0;
}