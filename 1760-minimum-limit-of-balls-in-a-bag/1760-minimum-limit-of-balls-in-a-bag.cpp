class Solution {
public:
    bool possible(vector<int>& nums,int c,int maxOperations){
        long long s=0;
        for(int i=0;i<nums.size();i++){
            s += (nums[i] - 1) / c;
        }
        return s<=maxOperations;
    }
    int minimumSize(vector<int>& nums, int maxOperations) {
        int low=1;
        int high=*max_element(nums.begin(),nums.end());
        int ans=-1;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(possible(nums,mid,maxOperations)==true){
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