#include <stdio.h>
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int checkForPerfectSquare(vector<int> arr,int i, int j)
{
	int mid, sum = 0;

	
	for (int m = i; m <= j; m++) {
		sum += arr[m];
	}

	int low = 0, high = sum / 2;
	while (low <= high) {
		mid = low + (high - low) / 2;

		if (mid * mid == sum) {
			return mid;
		}
 
		else if (mid * mid > sum) {
			high = mid - 1;
		}

		
		else {
			low = mid + 1;
		}
	}
	return -1;
}


int main()
{
	
	vector<int> arr;
	arr = {{13, 15, 30, 55, 87}};

	
	int L = 0, R = 1;

	cout << checkForPerfectSquare(arr, L, R);
	return 0;
}
