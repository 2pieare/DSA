#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	int count = 0;
	vector<int> divisors;
 	for(int i=1; i<=n; i++){
		if(n%i ==0){
			count++;
			divisors.push_back(i);
		}
	}
	cout << count << endl;
	for(auto& it: divisors){
		cout << it << " ";
	}
	return 0;
}