class Solution{
public:
    vector<int>twoSum(vector<int>& nums, int target){
        unordered_map<int,int> mpp;
        for (int k=0;k<nums.size();k++){
            int j=target-nums[k];
            if (mpp.count(j)){
                return {mpp[j],k};
            }
            mpp[nums[k]]=k;
        }
        return {};
    }
};