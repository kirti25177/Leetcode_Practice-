class Solution {
public:
bool possible(vector<int> &candies,int x, long long k){
    long long s=0;
    for(int i=0;i<candies.size();i++){
        s+=(candies[i]/x);
    }
    return s>=k;
}
    int maximumCandies(vector<int>& candies, long long k) {
        int low=1;
        int high=*max_element(candies.begin(),candies.end());
        int ans=0;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(possible(candies,mid,k)==true){
                ans=mid;
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        return ans;
    }
};