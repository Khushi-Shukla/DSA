// Pow(x, n)
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    double myPow(double x, int n) {
        if(n==0)
            return 1;
        double power=myPow(x,n/2);
        if(n%2==0)
                return power*power;
        if(n>0){
                return power*power*x;
        }
        return power*power/x;
    }
};