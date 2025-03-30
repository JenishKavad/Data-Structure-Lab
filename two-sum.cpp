class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>m;

        m.insert({nums[0],0});

        for(int i=1;i<nums.size();i++){
            if(m.count(target-nums[i])){
                return {m[target-nums[i]],i};
            }
            else
            m.insert({nums[i],i});
        }
        return {};
    }
};
