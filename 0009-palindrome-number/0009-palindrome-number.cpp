class Solution {
public:
    bool isPalindrome(int x) {
        long long r=0;
        int original=x;
        if(x<0){
            return false;
        }
        while(x!=0){
            int temp=x%10;
            r=r*10+temp;
            x=x/10;
        }
        return original==r;
    }
};