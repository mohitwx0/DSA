class Solution {
public:
    int jump(vector<int>& nums) {
        int jumps=0;
        int coverage=0;
        int lastJumpIdx=0;
        if(nums.size()==1) return 0;
        for(int i=0;i<nums.size();i++){
            coverage=max(coverage,i+nums[i]);
            if(i==lastJumpIdx){
                lastJumpIdx=coverage;
                jumps++;
                if(coverage>=nums.size()-1) return jumps;
            }
        }
        return jumps;
    }
};