#include<iostream.h>
#include<malloc.h>
main()
{
	int n,*a=0,i;
	cout<<"������n��";
	cin>>n;
	a=(int *)malloc(sizeof(int)*n);
	cout<<"������n����������";
for(i=0;i<n;i++)
{cin>>a[i];
}
cout<<"����Ϊ��\n";
for(i=n-1;i>=0;i--)
{cout<<" "<<a[i];
}
cout<<endl;
free(a);
return 0;
}