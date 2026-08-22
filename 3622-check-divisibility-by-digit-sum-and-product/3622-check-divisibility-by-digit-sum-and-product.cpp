class Solution {
public:
    bool checkDivisibility(int n) {
        int original=n;
        int s=0;
        int p=1;
        while(n!=0){
            int temp=n%10;
            s+=temp;
            p*=temp;
            n=n/10;
        }
        int a=s+p;
        return original%a==0;
    }
};