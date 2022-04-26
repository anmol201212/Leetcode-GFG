class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int i=0;int j=1;vector<int> vec;
        while(i<j){
            int sum = nums.at(i)+nums.at(j);
            if(sum == target){
                vec.push_back(i);
                vec.push_back(j);
                break;
            }
            else{
                j++;
                sum=0;
            }
            if(j==nums.size()){
                i++;j=i+1;sum=0;
            }
        }
        return vec;
    }
    };