#include <bits/stdc++.h>
using namespace std;
unordered_map<char, int> symbols = {{'[', -1}, {'(', -2}, {'{', -3}, {']', 1}, {')', 2}, {'}', 3}};
string isBalanced(string s)
{
    stack<char> st;
    for (char bracket : s)
    {
        if (symbols[bracket] < 0)
            st.push(bracket);
        
        else{
            if(st.empty()) return "NO";
            char top=st.top();
            st.pop();
            if(symbols[top]+symbols[bracket]!=0)
            return "NO";
        }
    }
    if(st.empty()) return "YES";
    return "NO";
}

int main()
{
    // stack<int> s;
    // s.push(2);
    // s.push(3);
    // s.push(5);
    // s.push(8);
    // while (!s.empty())
    // {
    //     cout << s.top() << endl;
    //     s.pop();
    // }
    //     queue<string> q;
    //     q.push("abc");
    //     q.push("fgh");
    //     q.push("ghj");
    //     q.push("xyz");
    //  while (!q.empty())
    //     {
    //        cout << q.front() << endl;
    //         q.pop();
    //      }
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        cout << isBalanced(s) << endl;
    }
}