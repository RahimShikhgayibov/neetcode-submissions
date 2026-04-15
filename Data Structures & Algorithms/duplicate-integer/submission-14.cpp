class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> vector;
        for(int i=0;i<nums.size();i++){
            vector.insert(nums[i]);
        }
        if(nums.size() != vector.size()){
            return true;
        }
        return false;
    }
};
