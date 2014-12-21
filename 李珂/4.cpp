#include<iostream.h>
#include<malloc.h>
main()
{
	int n,*a=0,i;
	cout<<"请输入n：";
	cin>>n;
	a=(int *)malloc(sizeof(int)*n);
	cout<<"请输入n个正整数：";
for(i=0;i<n;i++)
{cin>>a[i];
}
cout<<"倒序为：\n";
for(i=n-1;i>=0;i--)
{cout<<" "<<a[i];
}
cout<<endl;
free(a);
return 0;
}