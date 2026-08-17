#include<iostream>
#include<vector>
using namespace std;


int main(){
      vector<int> prices = {7,1, 5, 3, 6, 4};
      int buy = prices[0];
      int buyIndex = 0;;
      
      bool buyFound = false;
        for(int i = 0; i<prices.size()-1; i++){
            if (prices[i] < buy){
                buy = prices[i];
                buyIndex = i;
            }
        }
        int sell = prices[buyIndex+1];
        int sellIndex = buyIndex+ 1;
        for(int i = buyIndex+1; i<prices.size(); i++){
            if(prices[i] > sell){
                sell = prices[i];
                sellIndex = i;
            }
        }

        int maxP = sell - buy;

        cout<<"buy is: "<< buy<<endl;
        cout<<"buyIndex is: "<< buyIndex<<endl;
        cout<<"sell is: "<< sell<<endl;
        cout<<"sellIndex is: "<< sellIndex<<endl;
        cout<<" max profit is: "<< maxP<<endl;
        return 0;
    }