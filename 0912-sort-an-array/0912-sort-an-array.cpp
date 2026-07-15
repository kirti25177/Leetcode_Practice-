class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        //Question is saying solve in Time complexity of O(n log(n))
        sort(nums.begin(),nums.end());
        return nums;
    }
};