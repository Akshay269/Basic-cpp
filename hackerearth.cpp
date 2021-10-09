#include <bits/stdc++.h>
using namespace std;
// int sumnxt(string s, int i)
// {
//     int f = (int)s[i] + (int)s[i + 1];
//     return f;
// }
int main()
{
    // {
    //     string str;
    //     cin >> str;

    //     if (str[2] == 'A' || str[2] == 'E' || str[2] == 'I' || str[2] == 'O' || str[2] == 'U' || str[2]=='Y')
    //         cout << "invalid" << endl;
    //     else
    //     {
    //         if (sumnxt(str, 0) % 2 == 0 && sumnxt(str, 3) % 2 == 0 && sumnxt(str, 4) % 2 == 0 && sumnxt(str, 7) % 2 == 0)
    //             cout << "valid" << endl;
    //         else
    //             cout << "invalid" << endl;
    //     }

    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        for (int i = 0; i < k; i++) //k ka loop ,k* rotation by on place
        {
             int temp = arr[0]; //temp variable declare
            for (int i = 0; i < n - 1; i++)  //loop 0 se n-2 th element tak // this is like looop of rotation by one place
                arr[i] = arr[i + 1]; // main condition
            
            arr[n-1]=temp; // out of loop , last element ko temp pe jo ki 1st element 0th pos
        }

        for (int i = 0; i < n; i++) // print array
        {
            cout << arr[i] << " ";
        }
    }

    return 0;
}
