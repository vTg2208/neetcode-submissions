class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int, int> values;
        for(int i=0; i<nums.size(); i++){
            if(values.find(nums[i]) != values.end()){
                return true;
            }
            else{
                values[nums[i]] = 1;
            }
        }
        return false;
    }
};