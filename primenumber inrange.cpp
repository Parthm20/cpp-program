#include<iostream>
using namespace std;
int prime(int n1)
{
    for(int i=2;i<n1;i++)
    {
        if(n1%i==0){
            return 0;
        }
        
    }
    return 1;
    
    
}
int main()
{
    int n,i,pr;
    cin>>n;
    for(i=2;i<n;i++)
    {
      pr=prime(i); 
    
    if(pr==1)
    {
        cout<<i<<" ";
    }
    }
    
}
