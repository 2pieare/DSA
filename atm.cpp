#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	float m;
	int n;
	cin>>n>>m;
	if(n%5==0&&n<=m-0.5)
	m=(m-n-0.50);
	cout<<fixed<<setprecision(2)<<m;
	return 0;
}
