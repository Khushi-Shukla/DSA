// Alternating Digit Sum
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int alternateDigitSum(int n) {
        bool sum =1;
        int t=n;
        vector<int> v;
        while(t>0){
            int x=t%10;
            v.push_back(x);
            t/=10;
        }
        reverse(v.begin(), v.end());
        int ans=0;
        for(auto a:v){
            if(sum){
                ans+=a;
            }
            else{
                ans-=a;
            }
            sum=!sum;
        }
        return ans;
    }
};