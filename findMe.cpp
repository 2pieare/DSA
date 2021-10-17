#include <iostream>
using namespace std;

int main() {
	int n,k;
    cin >> n >> k;
    int arr[n];
    for (int i = 0; i <n; i++) {
        cin >> arr[i];
    }
    int flag;
    for (int i = 0; i <n; i++) {
        if(arr[i]==k){
            flag = 1;
            break;
        }else{
            flag = -1;
        }
    }
    cout << flag;
}
