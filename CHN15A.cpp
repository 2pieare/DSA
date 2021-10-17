#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n,k;
		cin >> n >> k;
		int arr[n];
		for(int i=0; i<n; i++){
			cin >> arr[i];
		}

		sort(arr,arr+n);
		int sum = 0;
		for(int j=0; j<n; j++){
			arr[j] += k;
			if(arr[j] %7 == 0){
				sum++;
			}
		}

		cout << sum << endl;
	}
	return 0;
}