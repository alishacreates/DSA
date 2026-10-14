// lowercase -> uppercase

#include<iostream>
#include<cstring>
using namespace std;

int main(){
    char str[10] = {'a', 'P', 'p', 'l', 'e', '\0'};
    for(int i = 0; i<strlen(str); i++){
        char ch = str[i];
        if(ch>='A' && ch<='Z'){ //uppercase already agar hai
            continue;
        } else {
            str[i] = ch - 'a' + 'A'; // aagr lowercase hai toj convert
        } 
    }
    cout<<str<<endl;
    return 0;
}

