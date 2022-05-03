
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int i=0;
        for(int j=0;j<nums.size();j++){
                if (nums[j] != val) {
                    nums[i] = nums[j];
                    i++;
            }
        }
        // int ans=nums.size()-count;
        // return ans;
        return i;
    }
};