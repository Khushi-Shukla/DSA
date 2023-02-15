// Add to Array-Form of Integer
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
        int digit=0, sum, carry=0;
        vector<int> res;
        int n=num.size();
        int i=n-1;
        while(k>0 && i>=0){
            digit=k%10;
            if(num[i]+digit+carry>9){
                sum=num[i]+digit+carry;
                res.push_back(sum%10);
                carry=sum/10;
            }
            else{
                res.push_back(num[i]+digit+carry);
                carry=0;
            }
            k/=10;
            i--;
        }
        while(i>=0){
            if(num[i]+carry>9){
                sum=num[i]+carry;
                res.push_back(sum%10);
                carry=sum/10;
            }
            else{
                res.push_back(num[i]+carry);
                carry=0;
            }
            i--;
        }
        
        while(k>0){
            digit=k%10;
            if(digit+carry>9){
                sum=digit+carry;
                res.push_back(sum%10);
                carry=sum/10;
            }
            else{
                res.push_back(digit+carry);
                carry=0;
            }
            k/=10;
            
        }
        
        if(carry>0)
            res.push_back(carry);
            
        reverse(res.begin(), res.end());
        return res;
    }
};