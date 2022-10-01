//BREAK THE ELEMENTS 
#include <bits/stdc++.h>
using namespace std;
#define int long long int
signed main() 
{
    int T=1;
    cin >> T;
    for(int i = 1; i <= T; i++)
    {
        int n;
        cin>>n;
        vector<int> a(n);
        int cnt=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]%2==0)
                cnt++;
        }
        if(cnt==n)
            cout<<0;
        else
            cout<<cnt;
        cout<<"\n";
    }
    return 0;
}
