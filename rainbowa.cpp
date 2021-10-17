#include <bits/stdc++.h>
using namespace std;

bool checkorder(int arr[], int n){
	bool a = false;
	for(int i=0; i<n; i++){
	if(arr[0] != 1){
		a = false;
		break;
	}else if(abs(arr[i+1]-arr[i]) <= 1){
		a = true;
	}else{
		a = false; 
		break;
	}
}
	return a;
}

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
		bool rainbow = false;

		if(checkorder(arr, n)){
			for(int j=n-1, i=0; i<n/2; i++,j--){
				if(arr[i] == arr[j]){
					rainbow = true;
				}else{
					rainbow = false;
					break;
				}
			}
		}
		else{
			rainbow = false;
		}

		if(rainbow && arr[n/2] == 7){
			cout << "yes" << endl;
		}else{
			cout << "no" << endl;
		}

	}
	return 0;
}