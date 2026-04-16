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
        //nums.size() tipi size_t-dır → bu unsigned (mənfi ola bilməyən) tipdir.
        // nums bosh olsa nums.size()-1 problemdir!
        // i nums.size() beraber ola bilmez nezere al!

        // sort(nums.begin() , nums.end());
        // for(int i=0;i+1<nums.size();i++){
        //     if(nums[i]==nums[i+1]){
        //         return true;
        //     }
        // }
        // return false;

        // sort(nums.begin() , nums.end());
        // for(int i=0;i<nums.size();i++){
        //     if(nums[i]==nums[i-1]){
        //         return true;
        //     }
        // }
        // return false;


        //hash strategy always look within arrays
        unordered_set<int> numbers;
        for(int num : nums){
            if(numbers.count(num)){
                return true;
            }
            numbers.insert(num);
        }
        return false;


    }
};