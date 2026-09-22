class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        set<int> seen;
        for (int num : nums) {
            seen.insert(num);
        }
        return seen.size() != nums.size();
    }
};