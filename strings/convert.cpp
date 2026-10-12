// lowercase -> uppercase

// #include<iostream>
// #include<cstring>
// using namespace std;

// int main(){
//     char str[10] = {'a', 'P', 'p', 'l', 'e', '\0'};
//     for(int i = 0; i<strlen(str); i++){
//         char ch = str[i];
//         if(ch>='A' && ch<='Z'){ //uppercase already agar hai
//             continue;
//         } else {
//             str[i] = ch - 'a' + 'A'; // aagr lowercase hai toj convert
//         } 
//     }
//     cout<<str<<endl;
//     return 0;
// }

// uppercase-> lowercase

#include<iostream>
#include<cstring>
using namespace std;

int main(){
    char str[10] = {'A', 'P', 'P', 'l', 'e'};
    cout<<"original string: "<<str<<endl;

    for(int i = 0; i<strlen(str); i++){
        int ch = str[i];
        if(ch>='a' && ch<='z'){
            continue;
        } else {
            str[i] = ch - 'A' + 'a';
        }
    }
    cout<<"after conversion:  "<<str<<endl;
    return 0;
}