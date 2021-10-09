#include<bits/stdc++.h>
using namespace std;

int main(){
    // map<pair<int,int>,int> m;
    // pair<int,int>p1,p2;
    // p1={1,2};
    // p2={2,3};
    // cout<<(p1>p2);//comparison happens p1 ka pehla element vs p2 ka pehla element
    map<int,set<string>>m;
    int n;cin>>n;
    for(int i=0;i<n;i++){
        int marks;string name;
        cin>>name>>marks;
        marks_map[marks].insert(name);

    }
    //ulta iterate
    auto cur_it=--marks_map.end();
    while (true)
    {
        auto &students=(*cur_it).second;
        int marks=(*cur_it).first;
    }
    




    
}