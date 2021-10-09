#include <iostream>
using namespace std;

// int getBit(int n, int pos)
// {
//     return ((n & (1 << pos)) != 0);
// }
// int setBit(int n,int pos){
//     return (n | (1<<pos));
// }

bool (int n){
    return (n && !(n &(n-1)));
}
int main()
{
//    cout<<setBit(5,1)<<endl;
    // cout << getBit(5, 2) << endl;
    return 0;
}