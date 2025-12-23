class Solution {
public:
    int countHillValley(vector<int>& nums) {
        int cnt=0;
        for(int i=1;i<nums.size()-1;i++){
            int prev=nums[i-1];
            int cr = nums[i];
            while(nums[i]==nums[i+1] && i<nums.size()-2) i++;
            int nex = nums[i+1];
            if(cr < nex && cr < prev) cnt++;
            if(cr > nex && cr > prev) cnt++;
        }
        return cnt;
    }
};