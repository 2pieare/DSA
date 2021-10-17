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
		int evencount =0;
		int oddcount =0;
		for(int j=0;j<n;j++){
			if(arr[j]%2 ==0) evencount++;
			else if(arr[j]%2 ==1) oddcount++;
		}
		int evenindex, oddindex;
		if(n%2==0){
			evenindex = n/2 ;
			oddindex = n/2;
		}else if(n%2==1){
			evenindex = (n-1)/2;
			oddindex = n-evenindex;
		}
		int maxsum = n - abs(evencount - oddindex);
		cout << maxsum << endl;
	}
	return 0;
}