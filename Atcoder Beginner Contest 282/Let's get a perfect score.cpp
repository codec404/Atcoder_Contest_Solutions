#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    int n,m;
    cin>>n>>m;
    char a[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>a[i][j];
        }
    }
    int result = 0;
    for(int i=0;i<n;i++)
    {
        for(int j = i+1;j<n;j++)
        {
            bool flag = true;
            for(int k =0;k<m;k++)
            {
                if(a[i][k] == 'x' && a[j][k] == 'x')
                {
                    flag = false;
                    break;
                }
            }
            if(flag)
            {
                result++;
            }
        }
    }
    cout<<result;
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
