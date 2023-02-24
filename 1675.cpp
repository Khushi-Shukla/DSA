// Minimize Deviation in Array
class Solution {
public:
    int minimumDeviation(vector<int>& nums) {
        priority_queue<int> pq;
        int minval=INT_MAX;
        for(auto a:nums){
            if(a%2!=0){
                a*=2;
            }
            pq.push(a);
            minval=min(a,minval);
        }
        int n=nums.size();
        int ans=pq.top()-minval;

        while(pq.top()%2==0){
            int t=pq.top()/2;
            pq.pop();
            pq.push(t);
            minval=min(minval, t);
            ans=min(ans, pq.top()-minval);
            // cout<<pq.top()<<" "<<nums[0]<<" "<<ans<<endl;
        }
        return ans;
    }
};