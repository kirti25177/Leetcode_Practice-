class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n=nums.size();
        int maxi=INT_MIN;
        int secondlargest=INT_MIN;
        for(int i=0;i<n;i++){
            if(nums[i]>maxi){
                secondlargest=maxi;
                maxi=nums[i];
            }
            else if(nums[i]>secondlargest){
                secondlargest=nums[i];
            }
        }
        return (maxi-1)*(secondlargest-1);
    }
};