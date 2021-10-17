#include <bits/stdc++.h>
using namespace std;

void as(){
	int a,b,d;
	cin >>a>>b;
	if(a>b){
		d = a-b;
	}else{
		d=b-a;
	}
	if(a==0 && b==0) cout << "0\n";
	else if(d%2==1)cout<<"-1\n";
	else if(d==0)cout<<"1\n";
	else if(d%2==0)cout<<"2\n";
}


int main(){
	int t;
	cin >> t;
	while(t--){
		as();
	}
}