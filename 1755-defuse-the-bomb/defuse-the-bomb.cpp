class Solution {
public:
    vector<int> decrypt(vector<int>& code, int k) {
        int n=code.size();
        vector<int>decryptCode(n,0);
        int sum=0;
        if(k==0) return decryptCode;
        if(k>0){
            for(int i=1;i<=k;i++){
                sum+=code[i%n];
            }
            for(int i=0;i<n;i++){
                decryptCode[i]=sum;
                sum-=code[(i+1)%n];
                sum+=code[(i+k+1)%n];
            }
        }else{
             int m = -k;
            for (int i = 1; i <= m; i++){
                sum += code[(n - i) % n];
            }
            for (int i = 0; i < n; i++) {
                decryptCode[i] = sum;
                sum -= code[(i - m + n) % n];
                sum += code[i];
            }
        }    
        return decryptCode;
    }
};