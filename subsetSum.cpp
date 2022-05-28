#include <bits/stdc++.h>
using namespace std;

void subsetSum(int ind, int sum, int arr[], int n, vector<int> &ds){
	if(ind == n){
		ds.push_back(sum);
		return;
	}
	subsetSum(ind+1, sum+arr[ind], arr, n, ds);
	subsetSum(ind+1, sum, arr, n, ds);
}

int main(){
	int arr[] = {3,1,2};
	int n = 3;
	
	vector<int> ds;
	subsetSum(0, 0, arr, n, ds);
	sort(ds.begin(), ds.end());
	
	for(int i=0; i<ds.size(); i++){
		cout << ds[i] << " ";
	}
	cout << endl;
	cout << "Total Sum of All Subsets is : " << accumulate(ds.begin(), ds.end(), 0);
	return 0;
}
