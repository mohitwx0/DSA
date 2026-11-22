class Solution {
public:
    void getPermute(vector<int>&nums,int idx,vector<vector<int>>&ans){
        if(idx==nums.size()){
            if(find(ans.begin(),ans.end(),nums) == ans.end()){
                ans.push_back(nums);
                return;
            }
        }
        for(int i=idx;i<nums.size();i++){
            swap(nums[i],nums[idx]);
            getPermute(nums,idx+1,ans);
            swap(nums[i],nums[idx]);
        }
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>>ans;
        getPermute(nums,0,ans);
        return ans;
    }
};