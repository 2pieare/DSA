#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	int count = 0;
	for(int i=1; i<=n; i++){
		if(n%i ==0){
			count++;
		}
	}
	int arr[count];
	for(int i=1; i<=n; i++){
		if(n%i ==0){
			arr[i-1] = i;
		}
	}
	cout << count << endl;
	for(int i=0; i<count; i++){
		cout << arr[i] << " ";
	}
	return 0;
}