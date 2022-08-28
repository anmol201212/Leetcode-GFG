class Solution {
public:
    int search(vector<int>& v, int target) {
        int l=0,h=v.size()-1;
        int mid = 0;
        int key = target;
        // cout<<target;
        while(l<=h){
            mid = (l+h)/2;
            cout<<mid<<" "<<v[mid]<<endl;
            if(v[mid]==key) {
                return mid;
            }
            else if(key>v[mid]){
                l=mid+1;
            }
            else if(key<v[mid]){
                h=mid-1;
            }
        }
        return -1;
    }
};