#include <iostream>

using namespace std;

int main(void)
{
    unsigned int t;
    cin>>t;
    for(unsigned int i=0;i<t;i++)
    {
      unsigned int c=0;
      unsigned int nails;
      cin>>nails;
      unsigned int data[nails][2];
      for(unsigned int j=0;j<nails;j++)
      {
         cin>>data[j][0];
         cin>>data[j][1];         
      }
      for(unsigned int j=0;j<nails;j++)
      {
         if(data[j][0]>data[j][1])
           c++;
      }    
      cout<<c<<endl;
      c=0;  
    }
    return(0);
}

