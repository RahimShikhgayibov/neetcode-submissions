class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map <int , int> numbers;

        for(int i=0;i<nums.size();i++){
            numbers[nums[i]]=i;
        }
        
        for(int i=0;i<nums.size();i++){
            int key=target-nums[i];
            if(numbers.find(key) != numbers.end() && numbers[key]!=i)
            {
                return {i,numbers[key]};
            }
        }

        return {};



    }
};

