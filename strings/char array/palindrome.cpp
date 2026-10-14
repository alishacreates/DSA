#include<iostream>
#include<cstring>
using namespace std;

int main(){
    bool pal = false;
    char str[10] = {'r', 'a', 'c', 'e', 'c', 'a', 'r', '\0'};
    int start = 0;
    cout <<strlen(str)<<endl;
    int end = (strlen(str)-1);

    while(start<=end){
        if(str[start]== str[end]){
            pal = true;
            start++;
            end--;
        } else {
            pal = false;
            break;
        }
    }
    if(pal == true){
        cout<<"yes it is a palindrome"<<endl;
    } else {
        cout <<"not a palindrome" <<endl;
    }
    return 0;
}