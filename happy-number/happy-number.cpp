class Solution {
public:
     unordered_set<int>dub;
    bool solve(int n){
        int sum=0;
        while(n>0){
            int t=n%10;
            sum+=t*t;
            n/=10;
        }
        if(sum==1)
                return true;
        else{
            if(dub.find(sum)==dub.end()){
                dub.insert(sum);
                return solve(sum);
            }
        }
        return false;
    }
    bool isHappy(int n) {
        bool ans=solve(n);
        return ans;
    }
};