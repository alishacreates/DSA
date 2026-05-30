#include<iostream>
using namespace std;
int main(){
    // butterfly pattern
    /*

    *             *
    * *         * *
    * * *     * * *   
    * * * * * * * *
    * * * * * * * *
    * * *     * * *
    * *         * * 
    *             *
    
    */
    int n=4;
    for(int i=0; i<=n-1; i++){
        for(int j=0; j<=i; j++){
        cout<<"*";
        }
        for(int k=n-1; k>=i+1; k--){
            cout<<"-";
        }
        for(int k=n-1; k>=i+1; k--){
            cout<<"-";
        }
        for(int j=0; j<=i; j++){
        cout<<"*";
        }
        cout<<endl;     
    }

    // lower half
    for(int i=0; i<=n-1; i++){
        for(int j=n; j>=i+1; j--){
            cout<<"*";
        }
        for(int k=0; k<=i-1; k++){
            cout<<"-";
        }
        for(int k=0; k<=i-1; k++){
            cout<<"-";
        }
        for(int j=n; j>=i+1; j--){
            cout<<"*";
        }

        cout<<endl;
    }
    return 0;
}