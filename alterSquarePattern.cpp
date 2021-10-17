/*
You're given a number N. Print the first N
 lines of the below-given pattern.

1 2 3 4 5
10 9 8 7 6
11 12 13 14 15
20 19 18 17 16
21 22 23 24 25
30 29 28 27 2
*/




#include <bits/stdc++.h>
using namespace std;

int main (){
	int n;
	cin >> n;
	int lastnum = -4;
	for(int i=0; i<n; i++){
		lastnum += 5;
		for (int j=1; j<=5; j++){
			//lastnum += 5;
			if(i==0 || i%2==0){
				//lastnum += 5;
				cout << lastnum<< " ";
				lastnum++;
			}else{
				//lastnum += 5;
				cout << lastnum-1<< " ";
				lastnum--;
			}
		}
		cout << endl;
	}
	return 0;
}