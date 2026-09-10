class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int m=matrix.size();
        int n=matrix[0].size();
        vector<int>ans;
        int stRow=0,endRow=m-1,stCol=0,endCol=n-1;
        while(stRow<=endRow && stCol<=endCol){
            for(int i=stCol;i<=endCol;i++){
                ans.push_back(matrix[stRow][i]);
            }
            for(int j=stRow+1;j<=endRow;j++){
                ans.push_back(matrix[j][endCol]);
            }
            for(int k=endCol-1;k>=stCol;k--){
                if(stRow==endRow){
                    break;
                }
                ans.push_back(matrix[endRow][k]);
            }
            for(int l=endRow-1;l>=stRow+1;l--){
                if(stCol==endCol){
                    break;
                }
                ans.push_back(matrix[l][stCol]);
            }
            stRow++;endRow--;stCol++;endCol--;
        }
        return ans;
    }
};