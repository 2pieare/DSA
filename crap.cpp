#include<bits/stdc++.h>
using namespace std;

int main(){
	int k, l , m;
	cin >> k;
	for(int i=0; i<k; i++){
		cin >> l >> m;
	}
    for(int j=0; j<l;j++){
    	for(int p=0; p<m;p++){
    		if((j+p)%2 == 0){
    			printf("*");
    		} else {
    			printf(".");
    		}
    	}
    }
	return 0;
}