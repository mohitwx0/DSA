class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        vector<int>sortedScore=score;
        sort(sortedScore.rbegin(),sortedScore.rend());
        unordered_map<int,string>mapping;
        vector<string>medals={"Gold Medal","Silver Medal","Bronze Medal"};
        vector<string>result;
        for(int i=0;i<sortedScore.size();i++){
            if(i<3) mapping[sortedScore[i]]=medals[i];
            else mapping[sortedScore[i]]=to_string(i+1);
        }
        for(int s:score) result.push_back(mapping[s]);
        return result;
    }
};