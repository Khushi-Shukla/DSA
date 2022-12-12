// Climbing Stairs
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int climbStairs(int n) {
        if(n==1 ||n==2 || n==3)
            return n;
        int a=2,b=3,c=5;
        int m=n;
        while(m-4>0){
            a=b;
            b=c;
            c=a+b;
            m--;
        }
        return c;
    }
};