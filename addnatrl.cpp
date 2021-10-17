#include <bits/stdc++.h>
using namespace std;
const int N = 1e9;
int arr[N];

int main(){
    // arr[0]=0;
    // arr[1]=1;
    //long long int sum;
    
    // for(long long int i=2; i<=N ; i++){
    //     arr[i]= arr[i-1]+i;
    // }
        long long n;
        cin>>n;
        long long sum=(n*( n + 1 ))/2;
        cout<<sum;
        return 0;
    }
