#include <bits/stdc++.h>
using namespace std;
void enqueue(int x, stack<long long int>& s1, stack<long long int>& s2){
	while(!(s1.empty())){
		long long int ele = s1.top();
		s1.pop();
		s2.push(ele);
	}
	s2.push(x);
	while(!(s2.empty())){
		long long int ele2 = s2.top();
		s2.pop();
		s1.push(ele2);
	}
}

void dequeue(stack<long long int>& s){
	s.pop();
}

void printfront(stack<long long int>& s){
	cout << s.top() << endl;
}

int main(){
	stack<long long int> s1;
	stack<long long int> s2;
	int t;
	cin >> t;
	while(t--){
		int a;
		cin >>a;
		if(a==1){
			long long int x;
			cin >> x;
			enqueue(x,s1,s2);
		}else if(a==2){
			dequeue(s1);
		}else{
			printfront(s1);
		}
	}
	return 0;
}