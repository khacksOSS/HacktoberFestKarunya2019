//https://www.codechef.com/OCT19B/problems/EVEDG

#include <iostream>
#include <vector>

#define ll long long

using namespace std;

int main()
{
    ll t;
    cin >> t;
    for (ll ii = 0; ii < t; ii++)
    {
        ll n, m;
        cin >> n >> m;
        vector<ll> g[n];

        for (ll i = 0; i < m; i++)
        {
            ll x, y;
            cin >> x >> y;
            g[x-1].push_back(y-1);
            g[y-1].push_back(x-1);
        }

        if(m % 2 == 0)
        {
            cout << 1 << endl;
            for(ll i=0;i<n;i++)
                cout << 1 << " ";
        }

        else
        {
            ll flag = 0, pos;
            for(ll i = 0; i < n; i++)
                if(g[i].size() % 2 != 0)
            {
                pos = i;
                flag = 1;
                cout << 2 << endl;
                break;
            }

            if(flag)
                for(ll i = 0; i < n; i++)
                {
                    if(i == pos)
                        cout << 2 << " ";
                    else
                        cout << 1 << " ";
                }

            else
            {
                cout << 3 << endl;
                ll pos1, pos2;

                for(ll i = 0; i < n; i++)
                    if(g[i].size() != 0)
                    {
                        pos1 = i;
                        break;
                    }

                pos2 = g[pos1][0];

                for(ll i = 0; i < n; i++)
                {
                    if(i == pos1)
                        cout << 2 << " ";
                    else if(i == pos2)
                        cout << 3 << " ";
                    else
                        cout << 1 << " ";
                }
            }
        }
        cout << endl;
    }
}
