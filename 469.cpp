// { Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
public:
    // Function to find number of bits needed to be flipped to convert A to B
    int countBitsFlip(int a, int b) {

        // Your logic here
        int ct = 0;

        while (a || b)
        {
            int a_lastbit = a & 1;
            int b_lastbit = b & 1;

            int op = a_lastbit ^ b_lastbit;

            if (op) {
                ct++;
            }
            a = a >> 1;
            b = b >> 1;
        }

        return ct;
    }
};

// { Driver Code Starts.

// Driver Code
int main()
{
    int t;
    cin >> t; // input the testcases
    while (t--) //while testcases exist
    {
        int a, b;
        cin >> a >> b; //input a and b

        Solution ob;
        cout << ob.countBitsFlip(a, b) << endl;
    }
    return 0;
}  // } Driver Code Ends