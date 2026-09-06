class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int>us(nums.begin(),nums.end());
        int longest=0;
        for(auto val:us){
            if(!us.count(val-1)){
                int length=1;
                while(us.count(val+length)){
                    length++;
                }
                longest=max(longest,length);
            }
        }
        return longest;
    }
};