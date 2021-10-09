#include <iostream>
using namespace std;
// void swap(int a, int b)
// {
//     int temp = a;
//     a = b;
//     b = temp;

    void swappointer(int *a, int *b)
    {
        int temp = *a;
        *a = *b;
        *b = temp;
        
    }

int main()
{
    int a = 4, b = 6;
    cout << "The value of a is " << a << " and the value of b is " << b << endl;
    swappointer(&a, &b);
    cout << "The value of a is " << a << " and the value of b is " << b;

    return 0;
}