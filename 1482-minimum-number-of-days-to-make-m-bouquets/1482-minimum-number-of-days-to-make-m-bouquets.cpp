class Solution {
public:
    bool possible(vector<int> &arr,int day,int m,int k){
        int count=0;
        int noB=0;
        int n=arr.size();
        for(int i = 0; i < n; i++){
            if(arr[i]<=day){
                count++;
            }
            else{
                noB+=(count/k);
                count=0;
            }
        }
        noB+=count/k;
            return noB>=m;
        }
    int minDays(vector<int>& bloomDay, int m, int k) {
        //We can use BS on Answers Pattern
        int low=*min_element(bloomDay.begin(),bloomDay.end());
        int high=*max_element(bloomDay.begin(),bloomDay.end());
        int ans=-1;
        while(low<=high){
            if ((long long)m * k > bloomDay.size())
            return -1;
            int mid=low+(high-low)/2;
            if(possible(bloomDay,mid,m,k)==true){
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