#include <bits/stdc++.h>
using namespace std;

int countPossibleSubs(int ind, int s, int sum, int arr[], int n){
	//strictly done if array contains positives only
	if(s > sum) return 0;
	
	if(ind == n){
		//condition satisfied
		if(s == sum) return 1;
		//condition not satisfied
		else return 0;
	}
	
	s += arr[ind];
	int l = countPossibleSubs(ind+1,s,sum,arr,n);
	
	s -= arr[ind];
	int r = countPossibleSubs(ind+1,s,sum,arr,n);
	
	return l + r;   //if there were n function calls to be made instead of just l and r you can use a for loop and return the sum of all the calls
}

int main(){
	int arr[] = {1, 2, 1};
	int n = 3;
	int sum = 2;
	
	cout << countPossibleSubs(0, 0, sum, arr, n);
	return 0;
}