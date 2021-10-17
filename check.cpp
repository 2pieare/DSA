#include <bits/stdc++.h>
using namespace std;

int main() 
{
	int t;
    cin >> t;
    while(t--){
        int numworker;
        cin >> numworker;
        int arr[numworker];
        for(int i=0; i<numworker; i++){
            cin >> arr[i];
        }
        
        sort(arr, arr+numworker);
        
        int minsteps = 0;
        int t = arr[0];
        int diff;
        for(int j=0;j<numworker;j++){
            diff = arr[j]-t;
            minsteps = minsteps + diff;
        }
        cout << minsteps <<endl;
    }
    return 0;
}
