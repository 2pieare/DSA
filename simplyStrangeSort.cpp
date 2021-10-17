#include <bits/stdc++.h>
using namespace std;

int main (){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >>n;
		vector<int> a(n);
		for(int i=0; i<n ; i++){
			cin >> a[i];
		}
		int count = 0 ;
		while(!is_sorted(a.begin(),a.end())){
			for(int j=count%2; j<n-1; j+=2){
				if(a[j]>a[j+1]){
					swap(a[j],a[j+1]);
				}
			}
			count++;
		}
		cout<<count<<endl;
	}
	return 0;
}
