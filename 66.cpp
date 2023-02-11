// Plus One
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n=digits.size();
        int carry=0;
        int sum=digits[n-1]+1;
        if(sum>9){
            carry=1;
            sum=sum%10; //sum=0
        }
        digits[n-1]=sum;
        int i=n-2;
        while(i>=0 && carry==1){
            sum=digits[i]+carry;
            if(sum>9){
                carry=1;
                sum=sum%10; //sum=0
            }
            else{
                carry=0;
            }
            digits[i]=sum;
            i--;
        }
        
        if(carry==1){
            digits.push_back(1);
            reverse(digits.begin(), digits.end());            
        }
        return digits;
    }
};