//This algorithm is Insertion sort, one of the many ways to sort arrays. It has a time complexity of O(n^2) and a space complexity of O(n)
#include<bits/stdc++.h>
using namespace std;

void insertion_sort(vector<int> v){
	for(int i=1;i<v.size();i++){
		int temp = v[i];
		int j = i-1;
		while(j>=0 && v[j]>temp){
			v[j+1] = v[j];
			j--;
		}
		v[j+1] = temp;
	}
	for(int i=0;i<v.size();i++){
		cout<<v[i]<<" ";
	}
}

int main(){
	vector<int> v = {8,4,1,5,9,2};
	insertion_sort(v);
	return 0;
}
