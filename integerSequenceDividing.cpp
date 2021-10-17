#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	int sumofn = (n*(n+1))/2;
	if(sumofn%2 == 0){
		cout << 0;
	}else{
		cout << 1;
	}
}