#include<iostream>
#include<vector>
using namespace std;


int main(){
    vector<int> v = {1,2,3,4,5};
    int n = v.size();
    cout<<"the subarrays are:"<<endl;
    for(int st=0; st<n; st++ ){
        for(int end =st; end<=n-1; end++){
            cout<<"{"<<v[st]<<","<<v[end]<<"}"<<endl;
        }
        cout<<endl;
    }
    return 0;
}