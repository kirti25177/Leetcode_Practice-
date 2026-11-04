class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        set<int>s;
        for(int i=0;i<candyType.size();i++){
            s.insert(candyType[i]);
        }
        int unique= s.size();
        return min(unique,(int)candyType.size()/2);
    }
};