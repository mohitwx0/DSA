class Solution {
public:
    int firstOc(vector<int>&nums,int target){
        int st=0,end=nums.size()-1,ans=-1;
        while(st<=end){
            int mid=st+(end-st)/2;
            if(nums[mid]>target) end=mid-1;
            else if(nums[mid]<target) st=mid+1;
            else{
                ans=mid;
                end=mid-1;
            }
        }
        return ans;
    }
    int lastOc(vector<int>&nums,int target){
        int st=0,end=nums.size()-1,ans=-1;
        while(st<=end){
            int mid=st+(end-st)/2;
            if(nums[mid]>target) end=mid-1;
            else if(nums[mid]<target) st=mid+1;
            else{
                ans=mid;
                st=mid+1;
            }
        }
        return ans;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        int first=firstOc(nums,target);
        if(first==-1) return {-1,-1};
        return {first,lastOc(nums,target)};
    }
};