class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int,int> freq;
        for(int i=0;i<nums.size();i++){
            freq[nums[i]]++;           // bu ədədi bir dəfə də gördüm
            if(freq[nums[i]]>1){       // 1-dən çox → təkrar var
                return true;
            }
        }
        return false;
    }
};