class Solution {
public:
    long long timecal(vector<int>& piles,int h){
        long long total=0;
        for(int i=0;i<piles.size();i++){
            total+=ceil((double)piles[i]/h);
        }
        return total;
    }
    int maxarr(vector<int> &piles){
        int maxi=piles[0];
        for(int i=0;i<piles.size();i++){
            if(piles[i]>maxi){
                maxi=piles[i];
            }
        }
        return maxi;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int low=1;
        int high=maxarr(piles);
        int ans=-1;
        while(low<=high){
            int mid=(low+high)/2;
            if(timecal(piles,mid)<=h){
                ans=mid;
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return ans;
    }
};