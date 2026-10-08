class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        long long n=nums.size();
        vector<int>ans;
        //x-y = S-Sn
        //S2-S2n
        long long Sn=(n*(n+1))/2;
        long long S2n=(n*(n+1)*(2*n+1))/6;
        long long S=0,S2=0;
        for(int i=0;i<n;i++){
            S+=nums[i];
            S2+=(long long)nums[i]*(long long)nums[i];
        }
        long long val1=S-Sn;
        long long val2=S2-S2n;  
        val2=val2/val1;  // x+y
        long long x=(val1+val2)/2;
        long long y=x-val1;
        ans.push_back(x);
        ans.push_back(y);
        return ans;
    }
};