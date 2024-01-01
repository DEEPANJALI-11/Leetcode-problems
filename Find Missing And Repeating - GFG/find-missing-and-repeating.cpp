//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution{
public:
    vector<int> findTwoElement(vector<int> arr, int n) {
        // code here
        sort(arr.begin(),arr.end());
        int i,j,sum1=0,sum2=0,dub=0;
        int temp=arr[0];
        for(i=1;i<n;i++){
            if(arr[i]==temp)
                {
                    dub=temp;
                    break;
                }
                else 
                    temp=arr[i];
        }
        for(i=0;i<n;i++){
            sum2+=arr[i];
        }
        for(i=1;i<=n;i++)
            sum1+=i;
        int diff=(sum1-(sum2-dub));
        return {dub,diff};
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findTwoElement(a, n);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
}
// } Driver Code Ends