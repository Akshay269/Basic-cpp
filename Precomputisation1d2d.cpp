#include <bits/stdc++.h>
using namespace std;
const int N = 1e3 + 10;
int a[N][N];
// int a[N];
// int pf[N];


int main()
{
    // for 1D
    // int n;
    // cin >> n;
    // for (int i = 1; i <= n; i++)
    // {
    //     cin >> a[i];
    //     pf[i]=pf[i-1]+a[i];
    // }
    // int q;
    // cin >> q;
    // while (q--)
    // {
    //     int l, r;
    //     cin >> l >> r;
    //     cout<<pf[r]-pf[l-1]<<endl;
                //    simple //  long long sum = 0;
                //    simple //  for (int i = l; i <= r; i++)
                //    simple //  {
                //    simple     //  sum += a[i];
                //    simple //  }
                //    simple //  cout << sum << endl;
    // }

//    for 2d array
int n;cin>>n;
for (int i = 1; i =n; i++)
{
    for (int j = 1; i <= n; j++)
    {
        cin>>a[i][j];
    }
    
}
int q;cin>>q;
while(q--){
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    long long sum=0;
    for (int i = a; i <=c; i++)
    {
        for (int j = b; j <= d; j++)
        {
            sum+=a[i][j];
        }
        
    }
    cout<<sum<<endl;
    
}

    
    return 0;
}