#include <bits/stdc++.h>
using namespace std;

void calcu(int n, int l, int r){
	int minsum =INT_MAX;
	for(int i=l; i<=r; i++){
		int sum = 0;
		while((n/i) >= 0){
			//int sum =0;
			int rem = n%i;
			sum += rem;
			n = (n-rem)/i;
			minsum = min(minsum, sum);
		}
	}
	cout << minsum << endl;
}

int main(){
	int q;
	cin >> q;
	while(q--){
		int n,l,r;
		cin >> n >> l >> r;
		calcu(n,l,r);
	}
	return 0;
}