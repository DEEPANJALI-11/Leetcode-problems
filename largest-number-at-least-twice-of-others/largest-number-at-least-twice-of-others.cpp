class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int n=nums.size();
        int maxi=INT_MIN,ind=-1,i,j;
        for(i=0;i<n;i++){
            maxi=max(maxi,nums[i]);
            if(nums[i]==maxi)
                    ind=i;
        }
        for(i=0;i<n;i++){
            if(i==ind)
                    continue;
            else if((2*nums[i])>maxi)
                    return -1;
        }
        return ind;
    }
};