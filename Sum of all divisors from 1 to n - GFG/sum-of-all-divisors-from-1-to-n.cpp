//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function Template for C++
class Solution
{
public:
    long long sumOfDivisors(int N)
    {
        long ans=0;
        int i,j;
        for(i=1;i<=N;i++){
            //instead of using two loop for cheching each element in range from i i.e from 1 to N, 
            //find qoutient of no by i and multiply it by i, it will give the value of total no of
           ans+=i*(N/i);
        }
        return ans;
        // Write Your Code here
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin>>N;
        Solution ob;
        long long ans  = ob.sumOfDivisors(N);
        cout<<ans<<endl;
    }
    return 0;
}
// } Driver Code Ends