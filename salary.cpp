#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int arr[n];
		for(int i=0; i<n; i++){
			cin >> arr[i];
		}

		sort(arr,arr+n);
		int sum = 0;
		for(int j=1; j<n; j++){
			sum = sum + (arr[j] - arr[0]);
		}

		cout << sum << endl;
	}
	return 0;
}