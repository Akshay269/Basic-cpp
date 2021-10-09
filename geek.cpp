#include<iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c, n;
        cin >> a >> b >> c >> n;

        for (int i = 4; i <= n; i++){
        
            swap(a,b);
            swap(b,c);
            c = a + b + c;
        }
        cout << c << endl;
    }
    return 0;
}