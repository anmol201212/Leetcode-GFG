class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        for(int i=0;i<letters.size();i++){
            int temp = target;
            if(letters[i]>temp){
                return letters[i];
            }
        }
        return letters[0];
    }
};