#include <bits/stdc++.h>
using namespace std;

int main(){
    long long t,n;
    cin>>t;
    while(t--){
        cin>>n;

        if(n < 31){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
            long long ok = n - 30;
            if( (ok != 14 && ok != 10 )&& (ok != 6)){
                cout<<"14 10 6 "<<ok<<endl;
            }
            else{
                cout<<"6 10 15 "<<n - 31<<endl;
            }
        }
    }

    return 0;
}