#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >>  t;
    while(t--){
        int a,b;
        cin >> a >>b ;
        if(a>b) swap(a,b);

        if(a==b) cout << "0 0" << "\n";
        else{
        long long int diff= abs(a-b);
        long long int y = a%diff;
        y = min(y, y-diff);

        cout << diff << " "<< y << endl;}
    }
}