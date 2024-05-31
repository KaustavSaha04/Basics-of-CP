                            //Time taken: 0ms, within the limit of 1s.
#include <iostream>
#include <stack>

using namespace std;

stack<unsigned int> inp;

void sort1()
{
    if(inp.size()==1)
     return;
    else
    {
       unsigned int k=inp.top();
       inp.pop();
       sort1();
       if(k>inp.top())
       {
          unsigned int t=inp.top();
          inp.pop();
          inp.push(k);
          inp.push(t);
          return;
       }
       else 
       {
          inp.push(k);
          return;
       }
          
    }  
}


int main()
{
    unsigned int a,b,c,t;
    cin>>t;

    for(unsigned int i=0;i<t;i++)
    {
       cin>>a>>b>>c;
       
       inp.push(a);
       inp.push(b);
       inp.push(c);
       sort1();
       
       unsigned int t1=inp.top();
       inp.pop();
       unsigned int t2=inp.top();
       inp.pop();
              
       if((t1+t2)<10)
       {
          if(t2+(inp.top())<10)
          cout<<"No"<<endl;
          else
          cout<<"Yes"<<endl;
       }
       else
       {
         cout<<"Yes"<<endl;
       }
         
    }
    while(!inp.empty())  //empty the stack for new test case
        {
            inp.pop();
        }
     return(0);       
}

