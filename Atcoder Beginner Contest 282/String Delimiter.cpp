#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    vector<int> v;
    int count = 0;
    for(int i=0;i<n;i++)
    {
        if(s[i] == '\"')
        {
            count++;
        }
        if(count %2 ==0 && s[i] == ',')
        {
            cout<<'.';
        }
        else cout<<s[i];
    } 
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
