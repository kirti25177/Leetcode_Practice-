class Solution {
public:
    int countPairs(vector<int>& nums, int target) {
        int count=0;
        //This is brute force solution which takes the time complexity of O(n^2)
        //We can optimise the solution by using two pointer approach
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                if(nums[i]+nums[j]<target){
                    count++;
                }
            }
        }
        return count;
    }
};