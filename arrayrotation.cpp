#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,d;
    cin >> n>>d;
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }
    for (int i = 0; i < d; i++)
    {
    int temp = ar[0];
    for (int i = 0; i < n - 1; i++)
        ar[i] = ar[i + 1];

    ar[n - 1] = temp;
    }
    
    
    for (int i = 0; i < n; i++)
    {
        cout<<ar[i]<<" ";
    }
    
}