class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
      vector<int>ans;
      unordered_map<int,int>um;
      for(int i=0;i<nums.size();i++){
        int curr=nums[i];
        int x=target-curr;
        if(um.find(x)!=um.end()){
            ans.push_back(um[x]);
            ans.push_back(i);
            break;
        }
        um[curr]=i;
      }
      return ans;
    }
};