class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        int i,j,sum=0;
       // vector<int,int>ans;
        for(i=0;i<n;i++){
            for(j=i+1;j<n;j++){
                sum=nums[i]+nums[j];
                if(sum==target)
                    return{i,j};
            }
        }
        return {};
    }
};