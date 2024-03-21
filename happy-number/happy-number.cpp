class Solution {
public:
    unordered_set<int>s;
    bool solve(int n){
        int sum=0;
        while(n>0){
            int temp=n%10;
            sum+=temp*temp;
            n/=10;
        }
        if(sum==1)
                return true;
        else{
            if(s.find(sum)==s.end()){
                s.insert(sum);
                return(solve(sum));
            }
        }
        return false;
    }
    bool isHappy(int n) {
        bool ans=solve(n);
        return ans;
    }
};