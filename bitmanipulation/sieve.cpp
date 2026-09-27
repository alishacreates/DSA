#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n = 20;

    vector<bool> v(n+1, true);

    v[0] = v[1] = false;
    for(int i = 2; i<=n; i++){
        if(v[i] == true){
            for(int j = i*i; j<=n; j=j+i ){
                v[j] = false;
            }
        }
    }

    for(int i=0; i<=n; i++){
        if(v[i] == true){
            cout<<i<<" ";
        }
    }

   return 0;
}