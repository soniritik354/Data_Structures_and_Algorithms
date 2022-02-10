// Kadane's algorithm is the most efficient algorithm to find max sum of contiguous elements of an array
//Brute force process would involve using a double for loop leading to an O(n^2) Time Complexity but here we have done it in O(n).
#include<bits/stdc++.h>
using namespace std;

int main() {
	//Kadane's Algoithm
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int max_sum = INT_MIN;
	int curr_sum = 0;
	//We maintain a running sum and after each iteration we check if it is greater than max_sum -> we substtute max_sum as curr_sum.
	//Also if we get negative curr_sum we initialize the curr sum to zero as the negative part would contribute in reducing the max_sum. 
	for(int i=0;i<n;i++){
		curr_sum += arr[i];
		if(curr_sum>max_sum)
			max_sum = curr_sum;
		if(curr_sum<0)
			curr_sum = 0;
	}
	cout<<max_sum<<endl;

	return 0;
}
