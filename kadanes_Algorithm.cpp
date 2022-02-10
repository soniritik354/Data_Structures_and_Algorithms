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
	for(int i=0;i<6;i++){
		curr_sum += arr[i];
		if(curr_sum>max_sum)
			max_sum = curr_sum;
		if(curr_sum<0)
			curr_sum = 0;
	}
	cout<<max_sum<<endl;

	return 0;
}