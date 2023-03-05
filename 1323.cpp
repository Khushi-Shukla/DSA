// Maximum 69 Number
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maximum69Number (int num) {
        int t=num;
        int s=0;
        vector<int> n;
        while(t>0){
            int a = t%10;
            s = s*10+a;
            n.push_back(a);
            t /= 10;
        }
        // for(auto a: n)
        //     cout<<a<<" ";
        for(int i=n.size()-1;i>=0;i--){
            if(n[i]==6){
                n[i]=9;
                break;
            }
        }
        s=0;
        for(int i=n.size()-1;i>=0;i--){
            s=s*10+n[i];
        }
        num=s;
        return num;
    }
};