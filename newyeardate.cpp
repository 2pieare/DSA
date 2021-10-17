#include <bits/stdc++.h>
using namespace std;

int main(){
    long long t,n;
    cin>>t;
    while(t--){
        cin>>n;
        long long mod = n % 2020;
        long long div = n / 2020;

        if( mod <= div){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
    }
