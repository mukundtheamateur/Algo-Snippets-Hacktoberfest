#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin>>n;
    vector<int> a(n);
    map <int,int> mpp;
    for (int i=0; i<n; i++)
    {
        cin>>a[i];
        mpp[a[i]]++;
    }
    int maxf=0;
    for (auto i:mpp)
    {
        maxf=max(maxf,i.second);
    }

    int ans=0;
    ans=log2(maxf);
    if ( ( maxf&(maxf-1) ) !=0)
    {
        ans++;
    }
    cout<<ans<<endl;




}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}