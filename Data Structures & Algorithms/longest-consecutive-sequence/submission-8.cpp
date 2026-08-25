class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int max = 1, i=0;
        if(nums.size() == 0) return 0;
        
        while(i < nums.size()){
            int window = i + 1, count = 1;
            while(window < nums.size() && (nums[window] == nums[window-1] || nums[window] == nums[window-1]+1)){
                if(nums[window] == nums[window-1]+1){
                    count++;
                }
                window++;
            }
            max = std::max(max, count);
            i = window;
        }
        return max;
    }
};
