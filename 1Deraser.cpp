                            //Time taken was 1ms, within the limit of 1s
#include <iostream>

using namespace std;

int main (void)
{
  unsigned int t;
  cin>>t;          //stores the number of testcases 
  
  unsigned int n,k;
  
  for(unsigned int i=0;i<t;i++)   //loop through all the testcases
  {
     unsigned int c=0;
     unsigned int dist_from_prev;
     cin>>n>>k;      //take the n,k for each testcase
     string s;
     cin>>s;
     int index=0-k;
     for(unsigned int j=0;j<n;j++)
     {
        
        if(s[j]=='B')
        {
           dist_from_prev=j-index;
           if(dist_from_prev>=k)   //bcz id dist<=k-1, then they can be erased together, count only once
           {
               c++;
               index=j;
           }
           
        }
     }
     cout<<c<<"/n";     
  } 
}

