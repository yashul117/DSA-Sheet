// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
	vector<int> singleNumber(vector<int> nums)
	{
		// Code here.
		int ans1, ans2;
		ans1 = ans2 = 0;

		//Take XOR of all the elements

		int XOR = 0;

		for (auto &it : nums) {
			XOR = XOR ^ it;
		}

		//Find Set bit position

		int pos = 0, temp = XOR;
		while ((temp & 1) != 1) {
			pos++;
			temp = temp >> 1;
		}

		//Now store the elements with set bit at pos

		vector<int> vtemp;
		for (auto &it : nums) {
			if (it & (1 << pos)) {
				vtemp.push_back(it);
			}
		}

		//XOR all the elements in vtemp

		for (auto &it : vtemp) {
			ans1 = ans1 ^ it;
		}

		ans2 = ans1 ^ XOR;

		vector<int> ans;

		ans.push_back(ans1);
		ans.push_back(ans2);

		sort(ans.begin(), ans.end());
		return ans;
	}
};

// { Driver Code Starts.
int main() {
	int T;
	cin >> T;
	while (T--)
	{
		int n;
		cin >> n;
		vector<int> v(2 * n + 2);
		for (int i = 0; i < 2 * n + 2; i++)
			cin >> v[i];
		Solution ob;
		vector<int > ans = ob.singleNumber(v);
		for (auto i : ans)
			cout << i << " ";
		cout << "\n";
	}
	return 0;
}  // } Driver Code Ends