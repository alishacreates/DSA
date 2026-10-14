#include<iostream>
#include<cstring>
using namespace std;

int main(){
    char str[10] = {'a', 'L', 'i', 's', 'h', 'a', '\0'};
    int start = 0;
    cout<<strlen(str)<<endl;
    int end = (strlen(str)-1);

    while(start<end){
        swap(str[start], str[end]);
        start++;
        end--;
    }
    cout<<str<<endl;
    return 0;
}