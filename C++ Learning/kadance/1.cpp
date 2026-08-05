#include<iostream>
#include<vector>
#include<climits>

using namespace std;


int main(){
    vector<int> v = {1,2,3,4,5};
    int maxSum = 0;
    int n = v.size();
    cout<<"the subarrays are:"<<endl;
    for(int st=0; st<n; st++ ){
        for(int end =st; end<=n-1; end++){
                int sum = 0;
            cout<<"{";
            
            for(int i=st; i<=end; i++){
                
                cout<<v[i]<<" ";
                sum = sum +v[i];
            maxSum = max(sum, maxSum);
            }
            cout<<"}";
            // sum of all sub  
            cout<<"sum is: "<< sum<<endl;
        }
        cout<<endl;
    }

    cout<<" max sum is: " <<maxSum<<endl;
    
    return 0;
}