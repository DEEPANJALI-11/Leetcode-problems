//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++


class Solution
{
    public:
    // Function to check if Kth bit is set or not.
    bool checkKthBit(int n, int k)
    {
        // vector<int>b;
        // int rem,binary=0,pro=1;
        // while(n!=0){
        //     rem=n%2;
        //     binary=binary+(rem*pro);
        //     n=n/2;
        //     pro*=10;
        // }
        // string s="";
        // int no=0;
        // while(binary!=0){
        //     int rem=binary%10;
        //     no+=rem+no*10;
        //     s+=no;
        //     binary=binary/10;
        // }
        // return (s[k]==1);
        vector<int>arr;
        while(n>0){
            int digit=n%2;
            arr.push_back(digit);
            n=n/2;
        }
        int m=arr.size()-1;
        if(arr[k]==1 && m>=k){
            return true;
        }
        else return false;
        
        
       
        // Your code here
        // It can be a one liner logic!! Think of it!!
    }
};

//{ Driver Code Starts.

// Driver Code
int main()
{
	int t;
	cin>>t;//taking testcases
	while(t--)
	{
	    long long n;
	    cin>>n;//input n
	    int k;
	    cin>>k;//bit number k
	    Solution obj;
	    if(obj.checkKthBit(n, k))
	        cout << "Yes" << endl;
	    else
	        cout << "No" << endl;
	}
	return 0;
}
// } Driver Code Ends