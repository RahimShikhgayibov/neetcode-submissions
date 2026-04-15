class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {

        //0) Brute Force
        // for(int i=0;i<nums.size()-1;i++)
        // {
        //     for(int j=i+1;j<nums.size();j++)
        //     {
        //         if(nums[i]==nums[j]){
        //             return true;
        //         }
        //     }
        // }

        // return false;


        //1) Hashset first without optimization
        // unordered_set<int> vector;
        // for(int i=0;i<nums.size();i++){
        //     vector.insert(nums[i]);
        // }
        // if(nums.size() != vector.size()){
        //     return true;
        // }
        // return false;


        //2) sorting

        // sort(nums.begin(),nums.end());
        // for(int i=0;i<nums.size();i++){
        //     if(nums[i]==nums[i+1]){
        //         return true;
        //     }
        // }
        // return false;

        //*)
        // unordered_set<int> vector;
        // for(int i=0;i<nums.size();i++){
        //     if(vector.count(nums[i])>0){
        //         return true;
        //     }
        //     vector.insert(nums[i]);
        // }
        
        // return false;

        //extra) hashset

    
        return unordered_set <int> (nums.begin(),nums.end()).size() < nums.size();
    }
};




    





