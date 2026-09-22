class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> mp;

        for (string s : strs) {
            vector<int> cnt(26, 0);

            for (char c : s)
                cnt[c - 'a']++;

            string key;

            for (int x : cnt) {
                key += to_string(x);
                key += '#';
            }

            mp[key].push_back(s);
        }

        vector<vector<string>> ans;

        for (auto &p : mp)
            ans.push_back(p.second);

        return ans;
    }
};