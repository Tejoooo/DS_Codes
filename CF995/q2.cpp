#include<bits/stdc++.h>
#define ll long long
using namespace std;


int main()
{
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        vector<ll> a(n),b(n);
        for(ll i=0;i<n;i++){
            cin>>a[i];
        }
        for(ll i=0;i<n;i++){
            cin>>b[i];
        }
        int sa=0,sb=0;
        for(ll i=0;i<n-1;i++){
            if(a[i]>=b[i+1]){
                sa+=a[i];
                sb+=b[i+1];
            }
        }
        sa+=a[n-1];
        cout<<abs(sa-sb)<<endl;
    }

    return 0;
}