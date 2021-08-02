// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template in C++

class Solution {
public:
	//Function to return the count of number of elements in intersection of two arrays.
	int doIntersection(int a[], int n, int b[], int m) {
		int no;
		no = (n > m) ? n : m;

		return n + m - doUnion(a, n, b, m) - 1;
	}

	//Function to return the count of number of elements in union of two arrays.
	int doUnion(int a[], int n, int b[], int m)  {
		//code here
		int no;
		no = (n > m) ? n : m;
		/*
		 int c[no];

		 int i,j,k;

		 sort(a,a+n);
		 sort(b,b+m);

		 i=j=k=0;

		 while((i<n)&&(j<m))
		 {
		     if(a[i]<b[j]) {
		         if(a[i]!=c[k])
		             c[k++]=a[i++];
		     }
		     else {
		         if(b[j]!=c[k]) {
		             c[k++]=b[j++];
		         }
		     }
		 }

		 return k;*/

		/*
		int h[100000]={0};

		for(int i=0;i<n;i++) {
		    h[a[i]]++;
		}
		for(int i=0;i<m;i++) {
		    h[b[j]]++;
		}*/

		unordered_map<int, int> mp;

		for (int i = 0; i < n; i++) {
			mp[a[i]]++;
		}
		for (int i = 0; i < m; i++) {
			mp[b[i]]++;
		}

		return mp.size();
	}
};

// { Driver Code Starts.

int main() {

	int t;
	cin >> t;

	while (t--) {

		int n, m;
		cin >> n >> m;
		int a[n], b[m];

		for (int i = 0; i < n; i++)
			cin >> a[i];

		for (int i = 0; i < m; i++)
			cin >> b[i];
		Solution ob;
		cout << ob.doUnion(a, n, b, m) << endl;
		cout << ob.doIntersection(a, n, b, m) << endl;

	}

	return 0;
}  // } Driver Code Ends