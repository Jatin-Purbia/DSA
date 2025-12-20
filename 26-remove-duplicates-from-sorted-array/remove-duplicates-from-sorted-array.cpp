class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        // map <int,int>mpp;
        int cnt=0;
        int el=INT_MIN;
        int n = nums.size();
        for(int i=0;i<n;i++){
            if(el!=nums[i]){
                cnt=1;
                el=nums[i];
            }
            else if (nums[i]==el){
                nums.erase(nums.begin()+i);
                i--;
                n--;
            }
            else cnt=0;
        }
        return nums.size();
       
        
    }
};