#include<iostream.h>
#include<malloc.h>
main()
{
	int n,*a=0,i=0,j=0,t=0;
	cout<<"������n��";
	cin>>n;
	a=(int *)malloc(sizeof(int)*n);
	cout<<"������n����������";
for(i=0;i<n;i++)
{cin>>a[i];
}
for(i=n-2;i>=0;i--)
for(j=0;j<=i;j++)
if(a[j+1]<a[j])
{t=a[j];
a[j]=a[j+1];
a[j+1]=t;}
cout<<"�����\n";
for(i=0;i<=n-1;i++)
{cout<<" "<<a[i];
}
cout<<endl;
free(a);
return 0;
}