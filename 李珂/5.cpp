#include<iostream.h>
 void swap(int &a,int &b)
 {int t;
 t=a;
 a=b;
 b=t;
}

void swap(int *a,int *b)
{int t;
t=*a;
*a=*b;
*b=t;
}
main()
{
	int a=3,b=4;
	swap(&a,&b);
	cout<<"ָ�����������Ľ����"<<"a="<<a<<" "<<"b="<<b<<endl;
	swap(a,b);
    cout<<"���ý�����Ľ����"<<"a="<<a<<" "<<"b="<<b<<endl;
	return 0;
}
