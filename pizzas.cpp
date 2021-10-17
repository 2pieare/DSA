#include <bits/stdc++.h>

#define long long long
#define Integer_MAX_VALUE 0x7fffffff
#define Integer_MIN_VALUE 0x80000000
#define LONG_MAX_VALUE 0x7fffffffffffffffL
#define LONG_MIN_VALUE 0x8000000000000000L

using namespace std;

struct Solution
{
    void run()
    {
        long n;
        cin >> n;
        if (n < 6)
        {
            cout << 15 << endl;
            return;
        }
        if (n % 2 == 1)
        {
            n++;
        }
        cout << n * 5 / 2 << endl;
        ;
    }
};

int main()
{
    ios_base::sync_with_stdio(false);

    Solution solution = Solution();

    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        solution.run();
    }
    return 0;
}