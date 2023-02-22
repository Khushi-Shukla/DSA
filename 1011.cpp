// Capacity To Ship Packages Within D Days
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool valid(vector<int>& weights, int max, int days){
        int n=weights.size(), sum=0,k=1;
        for(int i=0;i<n;i++){
            sum+=weights[i];
            if(sum>max){
                k++;
                sum=weights[i];
            }
            if(k>days) return false;
        }
        return true;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int start=INT_MIN, end, ans;
        for(auto a:weights){
            start=max(start, a);
            end+=a;
        }
        while(start<=end){
            int mid=start+(end-start)/2;
            if(valid(weights, mid, days)){
                ans=mid;
                end=mid-1;
            }
            else{
                start=mid+1;
            }
        }
        return ans;
    }
};