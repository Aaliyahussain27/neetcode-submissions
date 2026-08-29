class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> index;
        int ele;
        for(int i=0 ;i<nums.size() ;i++){
            ele = nums[i];
            if(index.count(ele)){
                return true;
            }
            index.insert(ele);
        }
        return false;
    }
};