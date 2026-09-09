// linear search algorithm
#include<iostream>
#include<vector>
using namespace std;


int main(){
  vector<int> arr = {2, 4, 5, 1};
   int target = 5;
   for(int i=0; i<arr.size(); i++){
      if(arr[i] == target){
        cout<<i<<endl;
      }
   }
   return 0;
}