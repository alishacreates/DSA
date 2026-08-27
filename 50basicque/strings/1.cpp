// reverse a sting 
// Input:  "hello"
// Output: "olleh"

#include<iostream>
#include<string>
using namespace std;

int main(){
    string name;
    string reversed;
    cout<<"enter a string"<<endl;
    getline(cin, name);
    for(int i = name.length() - 1; i >= 0 ; i++){
        reversed.push_back(name[i]);  
    }
    cout<<"original string: "<< name<<endl;
    cout<<"reverse string: "<< reversed;
    return 0;
}

