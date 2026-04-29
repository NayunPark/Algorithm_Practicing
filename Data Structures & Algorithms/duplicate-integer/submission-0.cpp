class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> s;
        for (int n : nums) {
            auto result = s.insert(n).second;
            if (!result) { return true; }
        }
       return false;
    }
};