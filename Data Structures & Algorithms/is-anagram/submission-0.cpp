class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int> dict(26, 0);
        for(auto ch : s){
            dict[(int)ch - (int)('a')]++;
        }
        for(auto ch : t){
            dict[(int)ch - (int)('a')]--;
        }
        for(int value : dict){
            if(value != 0) return false;
        }
        return true;
    }
};
