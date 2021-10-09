#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v={2,3,5,7,8};
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    // vector<int>::iterator it=v.begin();
    //  for(it=v.begin();it!=v.end();it++){
    //      cout<<*(it)<<" ";
    //  }
    // Vector of pair
    // vector<pair<int,int>>v_p={{1,2},{2,3},{3,4}};
    // vector<pair<int,int>>::iterator it;
    // for(it=v_p.begin();it!=v_p.end();it++){
    //     cout<<it->first<<" "<<it->second<<endl;
    // }


    // iterator short
    // rangebased loop

    for(int value:v)
    {cout<<value<<" ";}
    cout<<endl;
    return 0;
}