class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> numbers;
        for(int i=0;i<nums.size();i++){
            numbers.insert(nums[i]);
        }
        if(numbers.size()==nums.size()){
            return false;
        }
        else{return true;}
    }
};