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
   ll N=1e8;
    vector<bool>is_prime(N-2,true);
    vector<ll>primes;
    primes.reserve(N);
    ll i=2;
    ll c=0;
    while(i<(N/2)+1)
    {
       if(is_prime[i-2]==true)
       {
         
          for(ll j=i*i;j<N;j+=i)
          {         
             if(j%i==0)
                is_prime[j-2]=false;
          }
       }
       if(is_prime[++c])
         i=c+2;       
    }

    for(ll i=2;i<N;i+=1)
    {
       if(is_prime[i-2]==true)
         primes.push_back(i);
    }
    for(unsigned int i=0;i<primes.size();i+=100)
       cout<<primes[i]<<endl;
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

