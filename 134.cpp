// Gas Station
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int totalGas=0, start=0, rem=0;
        for(int i=0;i<gas.size();i++){
            totalGas += gas[i]-cost[i];
            rem += gas[i]-cost[i];
            if(rem<0){
                start=i+1;
                rem=0;
            }
        }
        if(totalGas>=0) return start;
        return -1;
    }
};