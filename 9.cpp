// Palindrome Number
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isPalindrome(int x) {
        int temp=x;
        long long ans=0;
        long long s;
        while(temp>0){
            s=temp%10;
            ans=ans*10+s;
            temp/=10;
        }
        return ans==x;
    }
};