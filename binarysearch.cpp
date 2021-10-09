#include <iostream>
using namespace std;
int binarysearch(int arr[], int n, int key)
{
    int s = 0;
    int e = n - 1;
    while (s <= e)
    {
        int mid = (s + e) / 2;
        if (arr[mid] == key)
        {
            cout << arr[mid];
        }
        else if (arr[mid] < key)
        {
            s = mid + 1;
        }
        else
            
            {
                e = mid - 1;
            }
    }
    return -1;
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    int key;
    cin >> key;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << binarysearch(arr, n, key) << endl;

    return 0;
}