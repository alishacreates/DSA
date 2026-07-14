#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> c;
    vector<int> vec = {1, 2, 3};
    vector<int> vec(3, 0); //3 is the size of the vector and 0 are all the elements in that vector

    cout<<vec[0];
    return 0;
}