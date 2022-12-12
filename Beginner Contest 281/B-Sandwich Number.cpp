#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    string s;
    cin>>s;
    int l = s.length();
    if(l!=8)
    {
        cout<<"No";
        return;
    }
    if((s.front()>90||s.front()<60)||(s.back()>90||s.back()<65))
    {
        cout<<"No";
        return;
    }
    if(s[1]=='0')
    {
        cout<<"No";
        return;
    }
    for(int i=1;i<7;i++)
    {
        if(!isdigit(s[i]))
        {
            cout<<"No";
            return;
        }
    }
    cout<<"Yes";
}
int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    ll test=1;
//cin>>test;
    while(test--)
    {
        solve();
    }
    return 0;
}
