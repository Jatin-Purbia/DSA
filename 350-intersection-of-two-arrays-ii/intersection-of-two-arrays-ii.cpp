class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        map<int,int> mpp1;
        map<int,int> mpp2;
        for(int i=0;i<nums1.size();i++){
            mpp1[nums1[i]]++;
        }
        for(int i=0;i<nums2.size();i++){
            mpp2[nums2[i]]++;
        }
        for(auto i:mpp1){
            if(mpp2.find(i.first)!=mpp2.end()){
                for(int j=0;j<min(mpp2[i.first],i.second);j++) ans.push_back(i.first);
            }
        }
        return ans;
    }
};