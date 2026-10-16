class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string>ans;
        if(nums.empty()) return ans;
        for(int i=0;i<nums.size();i++){
            int st=nums[i];
            int end=i;
            while(end+1 < nums.size() && nums[end+1] == nums[end]+1) end++;
            if(nums[end]==st) ans.push_back(to_string(st));
            else ans.push_back(to_string(st)+"->"+to_string(nums[end]));
            i=end;
        }
        return ans;
    }
};