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
 

#define ll unsigned long long int

ll gcd(ll a,ll b)
{
  if (a == 0)
      return b;
    return gcd(b % a, a);
}

void solve(){
    unsigned int n;
    cin>>n;
    unsigned int c=0;
    for(unsigned int i=2;i<n;i++)
    {
       if(n%i!=0)
       {
          if(gcd(n,i)==1)
            c++;
       }
    }
    cout<<c+1<<"\n";
        
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

