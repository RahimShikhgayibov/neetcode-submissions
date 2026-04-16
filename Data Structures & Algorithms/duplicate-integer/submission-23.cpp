class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {

        //brute force
        // for(int i=0;i<nums.size();i++){
        //     for(int j=i+1;j<nums.size();j++){
        //         if(nums[i]==nums[j]){
        //             return true;
        //         }
        //     }
        // }
        // return false;

        //sort then compare
        sort(nums.begin() , nums.end());
        for(int i=0;i<nums.size();i++){
            if(nums[i]==nums[i+1]){
                return true;
            }
        }
        return false;


        //hash strategy always look within arrays

    }
};