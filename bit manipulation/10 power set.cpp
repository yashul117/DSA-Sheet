// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
public:
	vector<string> AllPossibleStrings(string s) {
		// Code here
		int powerSet_size = pow(2, s.length());
		vector<string> ans;
		for (int i = 0; i < powerSet_size; i++) {
			string temp = "";
			for (int j = 0; j < s.length(); j++) {
				if (i & (1 << j)) {
					temp.push_back(s[j]);
				}
			}
			ans.push_back(temp);
		}
		vector<string> res;

		for (auto x : ans)
		{
			if (x != "")
			{
				res.push_back(x);
			}
		}
		sort(res.begin(), res.end());
		return res;
	}
};

// { Driver Code Starts.
int main() {
	int tc;
	cin >> tc;
	while (tc--) {
		string s;
		cin >> s;
		Solution ob;
		vector<string> res = ob.AllPossibleStrings(s);
		for (auto i : res)
			cout << i << " ";
		cout << "\n";

	}
	return 0;
}  // } Driver Code Ends