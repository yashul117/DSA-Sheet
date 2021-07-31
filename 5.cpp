#include<bits/stdc++.h>
using namespace std;

void swap(int &a, int &b) {
	int t = a;
	a = b;
	b = t;
}

void partition(int a[], int n) {
	int i = 0;
	int j = n - 1;

	while (i < j) {
		if (a[i] <= 0 && a[j] >= 0) {
			j--;
		}
		else if (a[i] >= 0 && a[j] < 0) {
			swap(a[i], a[j]);
		}
		else if (a[i] >= 0 && a[j] >= 0) {
			j--;
		}
		else if (a[i] < 0 && a[j] < 0) {
			i++;
		}
	}
}

int main()
{	/*
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif*/

	int n;
	cin >> n;

	int a[20];

	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	partition(a, n);

	for (int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}
}