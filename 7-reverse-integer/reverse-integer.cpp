class Solution {
public:
    int reverse(int x) {
        long long ans=0;
        int dum=x,cnt=-1;
        while(dum!=0){
            dum/=10;
            cnt++;
        }
        while(x!=0){
            int temp=x%10;
            x=x/10;
            ans=ans + temp*pow(10,cnt);
            cnt--;

        }
        if(ans> INT_MAX || ans<INT_MIN) return 0;
        else return ans;
    }
};