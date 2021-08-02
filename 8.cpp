// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
public:
    // arr: input array
    // n: size of array
    //Function to find the sum of contiguous subarray with maximum sum.
    int maxSubarraySum(int arr[], int n) {

        // Your code here
        int sum = 0;
        int max = INT_MIN;

        for (int i = 0; i < n; i++) {
            sum += arr[i];

            max = (max > sum) ? max : sum;

            if (sum < 0) {
                sum = 0;
            }
        }
        return max;
    }
};

// { Driver Code Starts.

int main()
{
    int t, n;

    cin >> t; //input testcases
    while (t--) //while testcases exist
    {

        cin >> n; //input size of array

        int a[n];

        for (int i = 0; i < n; i++)
            cin >> a[i]; //inputting elements of array

        Solution ob;

        cout << ob.maxSubarraySum(a, n) << endl;
    }
}
// } Driver Code Ends