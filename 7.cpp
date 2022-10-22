#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int reverse(int x) {
        if(x>=INT_MAX || x<=INT_MIN )
            return 0;
        long long  n;
        if(x<0)
            n=abs(x);
        else
            n=x;
        long long int temp=n;
        long long int ans=0, num=0;
        while(temp>0){
            num=temp%10;
            ans=ans*10+num;
            if(ans>=INT_MAX)
                return 0;
            temp/=10;
        }
        if(x<0)
            ans=ans*-1;
        if(ans<=INT_MIN)
            return 0;
        return ans;
    }
};

int main(){
    Solution s;
    cout<<s.reverse(8832);
}