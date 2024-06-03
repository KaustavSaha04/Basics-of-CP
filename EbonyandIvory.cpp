                             //Time taken was 8ms, within the limit of 2s
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
 
using namespace std;
 

#define ll long long
#define int ll

int check(unsigned int a, unsigned int b, unsigned int c)
{
    unsigned int n=1;
   
   while((n*b)<c)
   {
      if((c%(n*b))%a==0)
      {
         return 1;
      }
      n++;  
   }
   return 0;
}

void solve(){
  
   unsigned int a,b,c;
   cin>>a>>b>>c;
   if(c<max(a,b))
   {
      if(c%(min(a,b))==0)
         cout<<"yes"<<"\n";
      else
         cout<<"no";
      return ;
   }
   if(check(a,b,c))
     cout<<"yes"<<"\n";
   else
   {
      if(check(b,a,c))
        cout<<"yes"<<"\n";
      else
        cout<<"no"<<"\n";
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
