#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n,a,b;
		int count0 = 0;
		int count1 = 0;
		cin >> n >> a >> b;
		string s;
		cin >> s;
		for(int i=0;i<n;i++){
			if(s[i]=='1'){
				count1++;
			}else{
				count0++;
			}
		}
		int time = (count0 * a)+(count1 * b);
		cout << time << endl;
	}
	return 0;
}