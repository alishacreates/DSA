// inverted triangle pattern 

// #include<iostream>
// using namespace std;

// int main(){
//       int n;
//     cout<<"enter n: ";
//     cin>>n;
//     for(int i = 0; i<=n-1; i++){
//         for(int k = 0; k<=i; k++){
//                 cout<<" ";
//         }
//             for(int j=i+1; j<=n; j++){
//             cout<<i+1;
//             }
//         cout<<endl;
//     }
//     return 0;
// }

#include<iostream>
using namespace std;

int main(){
      int n;
    cout<<"enter n: ";
    cin>>n;
    char b = 'A';
    for(int i = 0; i<=n-1; i++){
        for(int k = 0; k<=i; k++){
                cout<<" ";
        }
            for(int j=i+1; j<=n; j++){
            cout<<b;
            }
        cout<<endl;
        b=b+1;

    }
    return 0;
}