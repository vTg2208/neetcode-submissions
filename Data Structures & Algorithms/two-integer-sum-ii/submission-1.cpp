class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        sort(numbers.begin(), numbers.end());
        int i=0, j=numbers.size()-1;
        vector<int> solution;
        while(i < j){
            int sum = numbers[i]+numbers[j];
            if(target == sum){
                solution.push_back(i+1);
                solution.push_back(j+1);
                return solution;
            }
            if(target < sum){
                j--;
                continue;
            }
            if(target > sum){
                i++;
                continue;
            }
        }
    }
};
