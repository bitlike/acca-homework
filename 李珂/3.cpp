#include<iostream.h>
#include<stdio.h>
#include<math.h>
main()
{
	double n,sum;
	cout<<"请输入里程数：\n";
	cin>>n;
	n=ceil(n);
     if(n<=2.0)
		 sum=5;
	 else sum=5+(n-2)*3;

cout<<"花费"<<sum<<"元\n";
return 0;
}