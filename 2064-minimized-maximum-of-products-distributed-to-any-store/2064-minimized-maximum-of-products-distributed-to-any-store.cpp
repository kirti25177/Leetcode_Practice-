class Solution {
public:
    int possible(int n,vector<int> &quantities,int x){
        long long p=0;
        for(int i=0;i<quantities.size();i++){
            p += ceil((double)quantities[i] / x);
        }
        return p<=n;
    }
    int minimizedMaximum(int n, vector<int>& quantities) {
        int low=1;
        int high=*max_element(quantities.begin(),quantities.end());
        int ans=high;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(possible(n,quantities,mid)==true){
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