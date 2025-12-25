class Solution {
public:
    bool isPalindrome(int x) {
        bool tot;
        if(x<0) tot=false;
        else if(x==0) tot=true;
        else{
            long long ans=0;
            int dum=x,cnt=-1;
            while(dum!=0){
                dum/=10;
                cnt++;
            }
            dum=x;
            while(x!=0){
                ans=ans + (x%10)*pow(10,cnt);
                x=x/10;
                cnt--;
            }
            if(dum-ans==0) tot=true;
            else tot=false;
        }
        return tot;
    }
};