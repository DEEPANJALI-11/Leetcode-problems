class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        map<char,int>j,s;
        int c=0;
        int n=jewels.size(),m=stones.size(),i;
        for(i=0;i<n;i++){
            j[jewels[i]]++;
        }
        for(i=0;i<m;i++){
            s[stones[i]]++;
            if(j.find(stones[i])!=j.end())
                    c++;
        }
        return c;
    }
};