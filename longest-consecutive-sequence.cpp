class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> s(nums.begin(),nums.end());
        int ans=0;
        for(int i : s){
            if(!s.contains(i-1))
            {
                int y=i;
                while(s.contains(y)){
                    y++;
                }
                ans=max(ans,y-i);
            }
        }
        return ans;

    }
};
