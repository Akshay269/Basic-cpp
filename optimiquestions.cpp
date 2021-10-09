#include <bits/stdc++.h>
using namespace std;
const int N=1e7+10;
long long int ar[N];

int main()

{//xsquare and double strings

    // ios_base::sync_with_stdio(false);cin.tie(NULL);
    // int t;cin >> t;
    // while (t--){
    // int flag = 0, cnt[26] = {0};
    // string str;cin >> str;
    // for (int i = 0; i < str.length(); i++){ 
    //     cnt[str[i] - 'a']++;
    //     }
    //     for (int i = 0; i < 26; i++){
    //         if (cnt[i] >= 2)
    //         flag = 1;
            
    //     }
    //     if (flag == 1)
    //         cout << "Yes"
    //              << "\n";
        
    //     else
    //          cout << "No"
    //              << "\n";
    // }
    int n,m;cin>>n>>m;
    while (m--)
    {
        int a,b,d;cin>>a>>b>>d; //input and intially ar[N] me sab zero h, our special algorithm, l me add krna x aur r+1 me -x. next lines kiya gya h
        ar[a]=ar[a]+d;
        ar[b+1]=ar[b+1]-d;
    }
    for (int i = 1; i <=n; i++) //prefix sum step
    {
        ar[i]=ar[i]+ar[i-1];
    }
    long long mx=-1;  // max nikalne k liye final array me se.
    for (int i = 1; i <=n; i++)
    {
        if (mx<ar[i])
        {
            mx=ar[i];  // max aise hi toh nikalte
        }
        
    }
    cout<<mx<<endl;
    

    return 0;
}
