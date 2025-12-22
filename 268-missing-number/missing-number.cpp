class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int as=0;
        int sum = n*(n+1)/2;
        for(auto i : nums){
            as+=i;
        }
        return sum-as;
        // ANOTHER METHOD 
        // int el=INT_MIN;
        // vector<int> ans(nums.size()+1);
        // for(int i=0;i<nums.size();i++){
        //     ans[nums[i]]++;
        // }
        // for(int i=0;i<=nums.size();i++){
        //     if(ans[i]==0){
        //         el=i;
        //         return el;
        //     }
        // }
        // return el;
    }
};