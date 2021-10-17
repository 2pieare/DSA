#include <bits/stdc++.h>
using namespace std;

int main(){
	int a,b,c;
	cin >> a >> b >> c ;

	int d = max(a,max(b,c));
	if(d<a+b+c-d){
		cout << "YES";
	}else{
		cout <<"NO";
	}
}