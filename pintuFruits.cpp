#include <bits/stdc++.h>
using namespace std;

int main (){
	int t;
	cin >> t;
	while (t--){
		int n,m;
		cin >> n >> m;

		unordered_map<int,int> ma;
		int type[n+1];
		int price[n+1];

		for(int i=1; i <=n; i++){
			cin >> type[i];
		}
		for(int i=1; i <=n; i++){
			cin >> price[i];
		}

		for(int i=1; i<=n; i++){
			if(ma.find(type[i]) != ma.end()){
				ma[type[i]] += price[i];
			}else{
				ma[type[i]] = price[i];
			}
		}
		int minprice = INT_MAX;
		for(auto x: ma){
			minprice = min(minprice, x.second);
		}
		cout << minprice << endl;
	}
}