class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> vec3={};
        int i=0,j=0;
        while(i!=nums1.size() && j!=nums2.size()){
            if(nums1.at(i) <= nums2.at(j)){
                vec3.push_back(nums1[i]);
                i++;
            }
            else if(nums1.at(i)>nums2.at(j)){
                vec3.push_back(nums2[j]);
                j++;
            }
        }
        if(i!=nums1.size()){
            for(int k=i;k<nums1.size();k++){
                vec3.push_back(nums1[k]);
            }
        }
        if(j!=nums2.size()){
            for(int k=j;k<nums2.size();k++){
                vec3.push_back(nums2[k]);
            }
        }
        int mid = vec3.size()/2;
        double ans;
        // if(vec3.size()%2==0){
        //     ans = (vec3[mid] + vec3[(mid+1)])/2;
        //     // return ans;
        // }
        if(vec3.size()%2!=0){
            ans = vec3[mid];
        }
        else{
            ans = vec3[mid] + vec3[mid-1];
            ans = ans/2;
            // cout<<"hey";
        }
         return ans;
    }
};