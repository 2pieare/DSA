#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
 
    ll t;
    cin>>t;
 
    while(t--){
        ll n;
        cin>>n;
 
 
        double a;
        //ll b;
        //ll ans = 0;
        double final = log(n+1)/log(2);
        for(ll k=2;k<=final+1;k++){
            double x  = (n*1.0)/((ll)pow(2,k) - 1);
            ll y = n/((ll)pow(2,k) - 1);
 
            // watch2(x,y);
            // watch2(x,k);
 
            if(x==y && x>0){
                cout<<y<<"\n";
                break;
            }
        }
    }
 
 
    return 0;
}