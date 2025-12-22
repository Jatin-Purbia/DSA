class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int el=INT_MIN;
        vector<int> ans(nums.size()+1);
        for(int i=0;i<nums.size();i++){
            ans[nums[i]]++;
        }
        for(int i=0;i<=nums.size();i++){
            if(ans[i]==0){
                el=i;
                return el;
            }
        }
        return el;
    }
};