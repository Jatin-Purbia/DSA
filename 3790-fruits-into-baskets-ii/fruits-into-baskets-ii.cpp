class Solution {
public:
    int numOfUnplacedFruits(vector<int>& fruits, vector<int>& baskets) {
        int cnt=0;
        int n=fruits.size();
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(fruits[i]<=baskets[j]){
                fruits.erase(fruits.begin()+i);
                baskets.erase(baskets.begin()+j);
                i--;
                n--;
                break;
                }
            }
        }
        return fruits.size();
    }
};