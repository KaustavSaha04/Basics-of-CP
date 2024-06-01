#include<iostream>
#include<vector>
#include<map>
#include<unordered_map>
#include<stack>
#include<queue>
#include<set>
#include<cmath>
#include<algorithm>
#include<ctime>
#include<chrono>
#include<string>
#include<cstring>
#include<utility>
 
using namespace std;
 

#define ll long long
#define int ll

void solve(){

    unsigned int y,x;
    cin>>y>>x;
    if(y>x)
    {
      ll ans=(y-1)*(y-1);
      ll residual=0;
      
      if(y%2==0)
      {
      residual=2*y-x;
      }
      else
      residual=x;
      cout<<(ans+residual)<<"\n";
    }
    else
    {
      ll ans=pow((x-1),2);
      ll residual=0;
      
      if(x%2==0)
      {
        residual=y;
      }
      else
      {
        residual=2*x-y;
      }
      cout<<(ans+residual)<<"\n";
    }
    return;
}
 
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t1 = chrono::duration_cast< chrono::milliseconds >(chrono::system_clock::now().time_since_epoch()).count();
    freopen("input.txt", "r", stdin);
    unsigned int t=1;
    cin>>t;
    while(t--)
    {
        solve();
    }
    ll t2 = chrono::duration_cast< chrono::milliseconds >(chrono::system_clock::now().time_since_epoch()).count();
   cout << "MILLISECONDS: " << t2 - t1 << endl;
    return 0;
}

