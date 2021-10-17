#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while (t--){
		int n;
		cin >>n;
		/*for (int i = 1; i <=n; i++){
			cout << i << " ";
		}
		for(int j=n-1; j>=1; j--){
			cout << j << " ";
		}
		cout << "\n";
		*/
		int sum=0, final=0;
		for(int i=1; i<=n; i++){
			sum = sum + (i*i);
		}
		final = (2*sum) - (n*n);
		cout << final << endl;
	}
	return 0;
}