class Solution {
public:
   bool solve(int n,unordered_set<int>&s){
        int sum=0;
        while(n>0){
            int rem=n%10;
            sum+=rem*rem;
            n/=10;
        }
        
        if(sum==1){
            return true;
        }
        else{
            if(s.find(sum)==s.end()){
                s.insert(sum);
                return solve(sum,s);
            }
        }
        
        return false;
    }
    bool isHappy(int n) {
        unordered_set<int>s;
        int ans=solve(n,s);
        return ans;
    }
};