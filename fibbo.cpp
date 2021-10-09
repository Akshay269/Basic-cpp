#include<iostream>
using namespace std;

void fibbo(int n){
    int t1=0;
    int t2=1;
    int nextterm;

    for (int i = 0; i < 5; i++)
    {
        cout<<t1<<" ";
        nextterm=t1+t2;
        t1=t2;
        t2=nextterm;
    }
    
}
int main(){
    int n;
    cin>>n;
    fibbo(n);
    
    return 0;
}