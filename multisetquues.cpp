#include <bits/stdc++.h>
using namespace std;
//cant use set bcoz duplicat values are not stored separately
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        multiset<long long> bags;
        for (int i = 0; i < n; i++)
        {
            int candy_ct;
            cin >> candy_ct;
            bags.insert(candy_ct);
        }
        long long total_candies = 0;
        for (int i = 0; i < k; i++)
        {
            auto last_it = (--bags.end());
            int candy_ct = *last_it;
            total_candies += candy_ct;
            //abhi hame sirf last itera delete krn h
            bags.erase(last_it);
            bags.insert(candy_ct / 2);
        }
        cout << total_candies << endl;
    }

    return 0;
}