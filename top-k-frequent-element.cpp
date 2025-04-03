class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>m;
        for(auto i:nums){
            m[i]++;
        }
        int n=nums.size();
        vector<vector<int>> bucket(n+1);
        for(auto it:m){
            int element=it.first;
            int frequency=it.second;
            bucket[frequency].push_back(element);
        }
        vector<int>ans;
        for(int i=n;i>=1 && k!=0;i--){
            if(bucket[i].size() == 0)
            continue;
            while(bucket[i].size()!=0 && k>0){
                ans.push_back(bucket[i].back());
                bucket[i].pop_back();
                k--;
            }
        }
        return ans;

    }
};
