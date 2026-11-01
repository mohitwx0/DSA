class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        int n=candyType.size();
        unordered_set<int>set(candyType.begin(),candyType.end());
        int m=set.size();
        return min(m,n/2);
    }
};