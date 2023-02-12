// Sum of Two Integers
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int getSum(int a, int b) {
        int c;
        uint32_t carry = b;
        while(b!=0){
            c=a&b;
            a=a^b;
            b=(unsigned int)c<<1;
        }
        return a;
    }
};