class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int el;
        map<int,int> mpp;
        for(int i=0;i<nums.size();i++){
            mpp[nums[i]]++;
        }
        for(auto i : mpp){
            if(i.second==1) el=i.first;
        }
        return el;
    }
};