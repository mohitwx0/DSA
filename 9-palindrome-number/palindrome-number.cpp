class Solution {
public:
    bool isPalindrome(int x) {
        int hrev=0;
        if(x<0 || (x%10==0 && x!=0)){
            return false;
        }
        while(hrev<x){
            hrev=(hrev*10)+(x%10);
            x/=10;
        }
        return (hrev==x || hrev/10==x);
    }
};