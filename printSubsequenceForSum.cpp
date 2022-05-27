#include <bits/stdc++.h>
using namespace std;

void printF(int ind, vector<int> &v, int s, int sum, int arr[], int n){
	if(ind == n){
		if(s == sum){
			for(auto ele  : v){
				cout << ele << " ";
			}
			cout << endl;
		}
		return;
	}
	
	v.push_back(arr[ind]);
	s += arr[ind];
	printF(ind+1, v, s, sum, arr, n);
	
	s -= arr[ind];
	v.pop_back();
	printF(ind+1, v, s, sum, arr, n);
}


int main(){
	int arr[] = {3, 1, 2};
	int n = 3;
	int sum = 2;
	vector<int> v;
	printF(0, v, 0, sum, arr, n); //index, arr, v, n
	
	return 0;
}