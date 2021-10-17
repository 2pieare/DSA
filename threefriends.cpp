#include <bits/stdc++.h>
using namespace std;

int main(){
	int q;
	cin >> q;
	while(q--){
		long a,b,c;
		cin >> a >> b >> c;
		long pairdist;

		if((a==b) || (b==c) || (c==a)){
			pairdist = 2*(max(a,max(b,c)) - min(a,min(c,b)) -1);
		}

		if(a==b==c) {pairdist = 0;}
		else {
			pairdist = abs(a-b) + abs(c-a) + abs(c-b) - 4;
			if(pairdist <= 0){
				cout << 0 << endl;
			} else{
			cout << pairdist << "\n";
			}
	}
}
}