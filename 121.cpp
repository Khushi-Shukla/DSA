// Best Time to Buy and Sell Stock
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit=0, maxprofit=0, minprice=INT_MAX;
        for(int i=0;i<prices.size();i++){
            if(minprice>prices[i]){
                minprice=prices[i];
            }
            else{
                maxprofit=max(maxprofit, prices[i]-minprice);
            }
        }
        return maxprofit;
    }
};