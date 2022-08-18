class Solution {
public:
    int trap(vector<int>& height) {
        int ans=0;
        int t = height.size();
        vector<int> left;
        vector<int> right(t,0);
        int temp1 = height[0];
        left.push_back(temp1);
        for(int i=1;i<height.size();i++){
            int temp = max(height[i],left[i-1]);
            left.push_back(temp);
            
        }
        
        temp1=height[t-1];
        right[t-1] = temp1;
        for(int i=t-2;i>=0;i--){
             right[i] = max(height[i],right[i+1]);
        }
        for(int i=1;i<height.size();i++){
            cout<<right[i]<<" ";
        }
        for(int i=0;i<height.size();i++){
            int temp = min(left[i],right[i])-height[i];
            if(temp>0)
            ans = ans + temp;
        }
        return ans;
    }
    
};