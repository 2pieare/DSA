#include <bits/stdc++.h>
using namespace std;

int main(){
	int arr[2] , k ;
	for (int i = 0; i<2; i++) cin >> arr[i];
	cin >> k ;
	int count = 0;
	for(int i = 0; i<2; i++){
		for(int j = 1; j<2; j++){
			if(abs(arr[i]-arr[j])==k){
				count++;
			}
		}
	}
	cout << count/2 << endl;
}