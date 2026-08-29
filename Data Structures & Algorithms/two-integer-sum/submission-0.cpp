class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> indices;

        for(int i=0;i<nums.size();i++){
            int complement = target - nums[i];
            if(indices.count(complement)){
                return {indices[complement], i};
            }
            else{
                indices[nums[i]] = i;
            }
        }
        return {};
    }
};