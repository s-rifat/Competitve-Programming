#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
typedef long long ll;
typedef tree<ll, null_type, less<ll>, rb_tree_tag, tree_order_statistics_node_update> ordered_set;
#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL);
//priority_queue<int, vector<int>, greater<int> > min_q;


int main()
{
    FAST

    ll t;
    cin>>t;

    while(t--)
    {
        ll n, d;
        cin>>n>>d;

        ll arr[n];

        bool bol = false;
        bool bol2 = true;
        for(ll i = 0;i<n;i++)
        {
            cin>>arr[i];
            if(arr[i]>d)
                bol2 = false;
        }

        for(ll i = 0;i<n;i++)
        {
            for(ll j =0;j<n;j++)
            {
                if(i==j)
                    continue;
                if(arr[i]+arr[j]<=d)
                    bol = true;
            }
        }

        if(bol || bol2)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;

    }

    return 0;
}

