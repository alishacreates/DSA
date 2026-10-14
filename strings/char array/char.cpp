#include<iostream>
using namespace std;
int main(){
    char sentence[50];
    cout<<"enter your sentence: ";
    cin.getline(sentence, 50, '*'); 
    cout<<"your sentence was: "<<sentence<<endl;
    cout<<strlen(sentence)<<endl;
    return 0;
}