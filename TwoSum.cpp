class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> vec1;
        for(int i=0;i<nums.size()-1;i++){
            for(int j=i+1;j<nums.size();j++){
                if(nums[i]+nums[j]==target){
                    vec1.push_back(i);
                    vec1.push_back(j);
                }
            }
        }
        return vec1;
    }
};