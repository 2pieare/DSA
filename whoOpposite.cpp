#include <bits/stdc++.h>
using namespace std;
int main(){
    int tc;
    cin >> tc;
    while(tc--){
        long long a,b,c,n,r;
        cin >>a>>b>>c;

        if(a>b){
            r=a-b;
        }else{
            r=b-a;
        }

        n=r*2;
        if(a>n || b>n || c>n){
            cout << "-1\n";
        }else{
            if(c+r<=n){
                cout<< c+r << "\n";
            } else if(c-r<=n && c-r>0){
                cout << c-r <<"\n";
            } else cout <<"-1\n";

        }

    }
    return 0;
}




