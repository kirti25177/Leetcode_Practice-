class Solution {
public:
    int maxProduct(vector<int>& nums) {
        // There is the Optimal solution 
        // Let me tell you the approach 
        // Firstly there can be these cases like all positive numbers in array 
        // or there can be even negative and other number positive
        // or there can be zeroes as well
        int prefix=1;
        int suffix=1;
        int n=nums.size();
        int ans=INT_MIN;
        for(int i=0;i<nums.size();i++){
            if(prefix==0){
                prefix=1;
            }
            if(suffix==0){
                suffix=1;
            }
            prefix=prefix*nums[i];
            suffix=suffix*nums[n-i-1];
            ans=max(ans,max(prefix,suffix));
        }
        return ans;
    }
};