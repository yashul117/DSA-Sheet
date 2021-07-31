#include<bits/stdc++.h>
using namespace std;
/*
int kth_min(int arr[], int n, int k)
{
	int min = INT_MAX;

	for (int i = 0; i < n)
	}

int kth_max(int arr[], int n, int k)
{

}
*/
int main()
{
	/*#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
	*/
	int n, k;
	int arr[n];

	cin >> n;

	for (int i = 0; i < n; ++i)
	{
		cin >> arr[i];
	}

	cout << "Enter k: ";
	cin >> k;

	sort(arr, arr + n);


	cout << "kth min element: " << arr[k] << "\n";
	cout << "kth max element: " << arr[n - k] << "\n";

}