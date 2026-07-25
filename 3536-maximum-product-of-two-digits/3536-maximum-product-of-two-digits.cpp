class Solution {
public:
    int maxProduct(int n) {
        int maxi=0;
        int secondmaxi=0;
        while(n>0){
            int d=n%10;
            if(d>maxi){
                secondmaxi=maxi;
                maxi=d;
            }
            else if(d>secondmaxi){
                secondmaxi=d;
            }
            n/=10;
        }
        return maxi*secondmaxi;
    }
};