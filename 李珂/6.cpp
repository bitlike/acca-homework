#include<iostream.h>
main()
{int n,i=0,j=0;
cin>>n;
for(i=2;i<n;i++)
if(n%i==0)
 j++;
if(j!=0)
cout<<"No\n";
else cout<<"Yes\n";
}