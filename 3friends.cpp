#include <iostream>
#include <math.h>
using namespace std;

int main(){

	int t;
	cin >> t;
	int a[3];
	while(t--){
		for(int i=0; i<3; i++){
			cin >> a[i];
		}
		if(a[1]==a[0] && a[1]==a[2]){
			cout << 0 << endl;
		}else{
			sort(a,a+3);
			long long sum =0;
			if(a[0]==a[1] || a[1]==a[2]){
				sum += abs(a[0]-a[1]) + abs(a[1]-a[2]) + abs(a[2]-a[0]);
				if(sum<=2){
					sum = 0;
				}else{
					sum -= 4;
				}
			}else{
				a[0]++;
				a[2]--;
				sum += abs(a[0]-a[1]) + abs(a[1]-a[2]) + abs(a[2]-a[0]);
			}
			cout << sum << endl;
		}
	}
	return 0;
}