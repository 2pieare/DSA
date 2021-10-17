#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while (t--){
		int n,q;
		cin >> n >>q;
		int a[n+10];
		int forwards[n+10];
		int backwards[n+10];
		forwards[0] = backwards[n+1] = 0;
		for(int i=1; i<=n; i++){
			cin >> a[i];
		}
		for(int i=1; i<=n; i++){
			forwards[i] = __gcd(forwards[i-1], a[i]);
		}
		for(int i=n; i>=1; i--){
			backwards[i] = __gcd(backwards[i+1], a[i]);
		}
		while(q--){
			int l,r;
			cin >> l >> r;
			cout << __gcd(forwards[l-1] , backwards[r+1]) << endl;
		}
	}
}