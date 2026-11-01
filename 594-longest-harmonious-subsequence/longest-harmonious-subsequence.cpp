class Solution {
public:
    int findLHS(vector<int>& nums) {
        int n = nums.size();
        if (n < 2) return 0;
        sort(nums.begin(), nums.end());
        int ans = 0;
        int left = 0;
        for (int right = 0; right < n; right++) {
            while (nums[right] - nums[left] > 1) {
                left++;
            }
            if (nums[right] - nums[left] == 1) {
                ans = max(ans, right - left + 1);
            }
        }
        return ans;
    }
};