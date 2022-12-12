#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    ll n,t;
    cin>>n>>t;
    ll a[n];
    vector<ll> prefix(n);
    for(int i=0;i<n;i++)
    cin>>a[i];
    prefix[0] = a[0];
    for(ll i=1;i<n;i++)
        prefix[i] = prefix[i-1]+a[i];
    ll ans,time;
    if(prefix[n-1]==t)
        ans = n;
    else if(prefix[n-1]<t)
    {
        ll get = t%prefix[n-1];
        for(int i=0;i<n;i++)
        {
            if(get<=a[i])
            {
                ans = i+1;
                time = get;
                break;
            }
            get-=a[i];
        }
    }
    else{
        for(int i=0;i<n;i++)
        {
            if(t<=a[i])
            {
                ans = i+1;
                time = t;
                break;
            }
            t-=a[i];
        }
    }
    cout<<ans<<" "<<time;
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
