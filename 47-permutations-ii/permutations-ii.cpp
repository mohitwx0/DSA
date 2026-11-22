class Solution {
public:
    void getPermute(vector<int>&nums,int idx,vector<vector<int>>&ans){
        if(idx==nums.size()){
            ans.push_back(nums);
            return;
        }
        unordered_set<int>s;
        for(int i=idx;i<nums.size();i++){
            if(s.count(nums[i])) continue;
            s.insert(nums[i]);
            swap(nums[i],nums[idx]);
            getPermute(nums,idx+1,ans);
            swap(nums[i],nums[idx]);
        }
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>>ans;
        sort(nums.begin(),nums.end());
        getPermute(nums,0,ans);
        return ans;
    }
};