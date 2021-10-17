#include <bits/stdc++.h>
typedef long long int ll;
const unsigned int MOD = 1000000007;

using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif

  int t;
  cin >> t;
  for (int tt = 0; tt < t; tt++)
  {
    ll a,b;
    cin>>a>>b;

    if(a>b)
      swap(a,b);

    if(a==b)
      cout<<"0 0\n";
    else
    {

      ll x=abs(a-b);

      ll y= a%x;
      y = min(y, x-y);


      cout<<x<<" "<<y<<"\n";

    }  
  }
#ifndef ONLINE_JUDGE
  cerr << "Time : " << 1000 * ((double)clock()) / (double)CLOCKS_PER_SEC << "ms\n";
#endif
  return 0;
}