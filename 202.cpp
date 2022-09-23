class Solution {
public:
    bool isHappy(int n) {
        
        while(true){
            long int value=0;
            long int t=n;
            while(t>0){
                int v=t%10;
                value+=v*v;
                t/=10;
            }
            if(value==1 || value==7){
                return true;
            }
            // if(n==1111111)
            //     return true;
            if(value>1 && value<7){
                return false;
            }
            n=value;
           
        }
    }
};


#include<bits/stdc++.h>

using namespace std;

int main(){
    Solution s;
    cout<<s.isHappy(19);
}