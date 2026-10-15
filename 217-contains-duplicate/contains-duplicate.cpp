class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int>us(nums.begin(),nums.end());
        int n=nums.size();
        int n1=us.size();
        return n!=n1;
    }
};