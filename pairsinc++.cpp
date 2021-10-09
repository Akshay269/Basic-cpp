#include<bits/stdc++.h>
using namespace std;

void printvec(vector<int>v){
    cout<<"size:"
<< v.size()<<endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
}


int main(){
//     pair<int,string> p;
//     // p=make_pair(2, "abc");
//     p={2, "abc"}; 
//     pair<int, string>&p1=p;
//     p1.first=6;
//     cout<<p.first << " " <<p.second <<endl;
//     int a[]={1,2,4};
//     int b[]={5,8,0};
//     pair<int,int>p_array[3];
//     p_array[0]={1,2};
//     p_array[1]={2,4};
//     p_array[2]={5,8};
//     swap(p_array[0],p_array[2]);
//     for (int i = 0; i < 3; i++)
//     {
//         cout<<p_array[i].first<< " "
// <<p_array[i].second<<endl;  
//   }
    
vector<int> v(10,5);
v.push_back(6);
v.push_back(10);
// v.pop_back();
// int n;cin>>n;
// for (int i = 0; i < n; i++)
// {
//     int x;cin>>x;
//     printvec(v);
//     v.push_back(x);
// }
vector<int> v2=v;
v2.push_back(58);
printvec(v);
printvec(v2);

    return 0;
}