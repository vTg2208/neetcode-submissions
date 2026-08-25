class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        vector<pair<int, int>> freq;
        vector<int> sol;
        int i = 0;
        while(i < nums.size()){
            int count = 1;
            while((i+count) < nums.size() && nums[i+count] == nums[i]){
                count++;
            }
            freq.push_back({nums[i], count});
            i += count;
        }
        sort(freq.begin(), freq.end(), [](pair<int, int> a, pair<int, int> b){
            return a.second > b.second;
        });
        for(int i=0; i<k; i++){
            sol.push_back(freq[i].first);
        }
        sort(sol.begin(), sol.end());
        return sol;
    }
};
