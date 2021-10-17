#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;

		int rev =0;
		while(n){
			int mod = n%10;
			rev = rev*10 + mod;
			n = n/10;
		}
		cout << rev << endl;
	}
	return 0;
}