#include<bits/stdc++.h>
using namespace std;

void swap(int &a, int &b) {

	int temp;
	temp = a;
	a = b;
	b = temp;
}

int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int arr[20];
	int n;

	cin >> n;

	for (int i = 0; i < n; ++i)
	{
		cin >> arr[i];
	}

	for (int i = 0, j = n - 1; i < j; i++, j--)
	{
		swap(arr[i], arr[j]); // Swapping front and back elements
	}

	// Display
	for (int i = 0; i < n; ++i)
	{
		cout << arr[i] << " ";
	}

	return 0;
}