class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> numbers(nums.size()*2);

        // for(int i=0;i<nums.size();i++){
        //     numbers[i]=nums[i];
        // }

        // for(int i=0;i<nums.size();i++){
        //     numbers[i+nums.size()]=nums[i];
        // }

        for(int i=0;i<nums.size()*2;i++){
            if(i>=nums.size()){
                numbers[i]=nums[i-nums.size()];
                
            }
            else{
            numbers[i]=nums[i];
            }
        }

        return numbers;
    }
};