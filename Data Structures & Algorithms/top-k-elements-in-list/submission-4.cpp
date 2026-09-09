class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int, int> mp;
        for(int num : nums) mp[num]++;
        vector<pair<int, int>> mps(mp.begin(), mp.end());
        sort(mps.begin(), mps.end(), [](auto& a, auto& b){
            return a.second > b.second;
        });
        vector<int> sols;
        for(int i=0; i<k; i++){
            sols.push_back(mps[i].first);
        }
        return sols;
    }
};
