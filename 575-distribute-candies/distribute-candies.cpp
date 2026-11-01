class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        int n=candyType.size();
        unordered_map<int,int>alice;
        int count=0;
        for(int i=0;i<n;i++){
            if(alice.find(candyType[i])==alice.end()){
                alice[candyType[i]]=1;
                count++;
            }
        }
        return min(count,n/2);
    }
};