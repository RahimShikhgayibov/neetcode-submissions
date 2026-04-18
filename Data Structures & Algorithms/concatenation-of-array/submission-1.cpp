class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {

        //Solution 1 
        //push array back to back
        vector<int> numbers;
        for(int i=0;i<2;i++){
            for(int num : nums){
                numbers.push_back(num);
            }
        }




        //Solution 2 
        // index 0 is equal to index 3 logic

        // int n=nums.size();
        // vector<int> numbers(2 * n);
        // for(int i=0;i<n;i++){
        //     numbers[i]=numbers[i+n]=nums[i];
        // }

        return numbers;
    }
};