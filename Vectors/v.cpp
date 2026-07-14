#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> c;
    vector<int> vec = {1, 2, 3};
    vec.push_back(8);
    cout<<" the size is " <<vec.size()<<endl; //kitne elements hain
    cout<<vec.capacity()<<endl; //kitni jagah hai vector mei

    return 0;
}