// Maximum Ice Cream Bars
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        sort(costs.begin(), costs.end());
        int count=0;
        for(auto a:costs){
            if(a<=coins){
                count++;
                coins-=a;
            }
        }
        return count;
    }
};