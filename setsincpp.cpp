#include <bits/stdc++.h>
using namespace std;
void print(set<string> &s)
{
    for (string value : s)
    {
        cout << value << endl;
    }
//     for (auto it = s.begin(); it != s.end(); it++)
//     {
//         cout << (*it) << endl;
//     }
}

int main()
{ // sorted order me store hongi
    // set<string> s;
    // s.insert("abc"); //log(n)
    // s.insert("bhfb");
    // s.insert("vhbj");
    // s.insert("abc");
    //auto it = s.find("abc"); //o(log(n))
    
    // if(it!=s.end()){
    //     cout<<(*it);
    // }
    // s.erase("bhfb");
    // print(s);


    // set<string> s;
    // int n;cin>>n;
    // for (int i = 0; i < n; i++)
    // {
    //     string str;
    //     cin>>str;
    //     s.insert(str);
    // }
    // for(auto value : s){
    //     cout<<value<<endl;
    // }
    

    //unordered set
    unordered_set<string>s;//basic data type hi rakhna 
    int n;cin>>n;
    for (int i = 0; i < n; i++)
    {
        string str;cin>>str;
        s.insert(str);
           
     }
     int q;cin>>q;
     while (q--)
     {
         string str;cin>>str;
         if(s.find(str)==s.end()){
             cout<<"no"<<endl;
         }
         else{
             cout<<"yes"<<endl;
         }
     }
     
    
    return 0;
}