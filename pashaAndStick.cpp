#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	int half = n/2;
	if(n%2 != 0){
		cout << 0 <<endl;
	}else {
		if(n%4 ==0){
			cout << (half/2)-1;
		}else{
			cout << half/2;
			}
	}
	return 0;	
}