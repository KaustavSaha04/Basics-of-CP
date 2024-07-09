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

int freq(string s)
{
   int freq=0;
   for(unsigned int i=0;i<s.size();i++)
   { 
      if(s[i]=='1')
        freq++;
   }
   return freq;
}

void solve()
{
   int k;
   cin>>k;
   string s;
   cin>>s;
   string sub[s.size()][s.size()];
   unsigned int c=s.size();
   unsigned int count=0;
   for(unsigned int i=0;i<s.size();i++)
   {
      for(unsigned int j=1;j<=c;j++)
      {
         sub[i][j-1]=s.substr(i,j);
      }
      c--;
   }
   for(unsigned int i=0;i<s.size();i++)
   {
     for(unsigned int j=0;j<s.size();j++)
     {
        if(freq(sub[i][j])==k)
          count++;
     }
   }
   cout<<count<<"\n";
  }
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t1 = chrono::duration_cast< chrono::milliseconds >(chrono::system_clock::now().time_since_epoch()).count();
    freopen("input.txt", "r", stdin);
    unsigned int t=1;
    //cin>>t;
    while(t--)
    {
        solve();
    }
    ll t2 = chrono::duration_cast< chrono::milliseconds >(chrono::system_clock::now().time_since_epoch()).count();
   cout << "MILLISECONDS: " << t2 - t1 << endl;
    return 0;
}

