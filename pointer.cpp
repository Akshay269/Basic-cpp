#include<iostream>
using namespace std;

void swap(int *x,int *b){
    int temp=*x;
    *x=*b;
    *b=temp;
}

// call by reference



int main(){
    // int a=7;   apna college pointer video dekho
    // int *aptr=&a;
    // cout<<&a<<endl;
    // cout<<aptr<<endl;
    // cout<<*aptr<<endl;
    // int arr[]={4,5,6};
    // cout<<*arr<<endl;
    // cout<<*(arr+1)<<endl;
    // cout<<*(arr+2)<<endl;

    // int *ptr=arr;
    
    // for (int i = 0; i < 3; i++)
    // {
    //     cout<<*ptr<<endl;
    //     cout<<ptr<<endl;
    //     ptr++;
    // }
    int a=2;
    int b=4;
    int*aptr=&a;
    int*bptr=&b;


    swap(aptr,bptr);
    cout<<a<<" "<<b;
    

return 0;
}