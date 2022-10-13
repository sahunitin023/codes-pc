#include <bits/stdc++.h>
using namespace std;

int getRandom(int x, int y)
{
	srand(time(NULL));
	return (x + rand() % (y - x + 1));
}

int randomBS(int arr[], int l, int r, int x)
{
	if (r >= l)
	{
		int mid = getRandom(l, r);
		if (arr[mid] == x)
			return mid;
		if (arr[mid] > x)
			return randomBS(arr, l, mid - 1, x);
		return randomBS(arr, mid + 1, r, x);
	}

	return -1;
}

int main()
{
	int x;
	int arr[] = {1, 2, 3, 5, 7, 11, 13, 17, 19};
	int n = sizeof(arr) / sizeof(arr[0]);
	cout<<"Enter the number You want to Search: ";
	
	cin >> x;
	int res = randomBS(arr, 0, n - 1, x);
	if (res == -1)
		cout << "Element is not present in array";
	else
		cout << "Element is present at " << res + 1 << endl;
	return 0;
}
