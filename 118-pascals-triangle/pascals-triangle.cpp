class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> final;
        for(int i=1;i<=numRows;i++){
            vector<int> temp;
            long long ans = 1;
            temp.push_back(ans);
            for(int j=1;j<i;j++){
                ans = ans * (i-j);
                ans = ans / (j);
                temp.push_back(ans);
            }
            final.push_back(temp);
        }
        return final;
    }
};