#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n + 1), b(n + 1);
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
        }
        for (int i = 1; i <= n; i++)
        {
            cin >> b[i];
        }
        int count = 0;

        for (int i = 1; i <= n; i++)
        {
            if (b[i] <= (a[i] - a[i - 1]))
            {
                count++;
            }
        }

        cout << count << endl;
    }
}