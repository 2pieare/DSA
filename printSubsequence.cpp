#include <bits/stdc++.h>
using namespace std;

void printF(int ind, int arr[],vector<int> &v, int n){
	if(ind == n){
		
		for(auto ele  : v){
			cout << ele << " ";
		}
		if(v.size() == 0){
			cout << "{}";
		}
		cout << endl;
		return;
	}
	
	v.push_back(arr[ind]);
	printF(ind+1, arr, v, n);
	
	v.pop_back();
	printF(ind+1, arr, v, n);
	
}


int main(){
	int arr[] = {3, 1, 2};
	int n = 3;
	vector<int> v;
	printF(0, arr, v, n); //index, arr, v, n
}