#include<iostream>
#include<string.h>
using namespace std;
main()
{
    int i,j,n,count=0;
    
    cout<<"enter the value of n"<<endl;
    cin>>n;
   char c;
    for(i=1;i<=n;i++)
    {

         int value=i;
        for(j=1;j<=i;j++)
        {
        c='A'+n-value+j-1;
            cout<<c;
           
            
        }   
        cout<<endl;
        
        
        
    }
}