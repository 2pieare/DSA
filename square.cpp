#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while (t--){
		int a1, b1;
		cin >> a1 >> b1;
		int a2, b2;
		cin >> a2 >> b2;

		int d = min(a1, a2);
		int e = max(a1, a2);

		int f = min(b1, b2);
		int g = max(b1, b2);

		if((e == g) && (d+f == e)){
				cout << "YES" << endl;}
		else{
			cout << "NO" << endl;}

	}
	return 0;
}