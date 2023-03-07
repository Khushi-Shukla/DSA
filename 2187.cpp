// Minimum Time to Complete Trips
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    long long int totalTrip(long long int time, int totaltime, vector<int>& timeArr){
        long long int num = 0;
        for(auto a:timeArr){
            long long int val=a;
            num+=(time/val);
        }
        return num;
    }
    long long minimumTime(vector<int>& time, int totalTrips) {
        long long int i=1;
        int maxval=0;
        for(auto a:time){
            maxval=max(maxval, a);
        }
        long long int j=(long)maxval*totalTrips;
        while(i<j){
            long long int mid=i+(j-i)/2;
            long long int num=totalTrip(mid, totalTrips, time);
            // cout<<num<<" "<<mid<<endl;
            if(num>=totalTrips){
                // ans=mid;
                j=mid;
            }
            else{
                i=mid+1;
            }
        }
        return i;
    }
};