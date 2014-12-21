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
	cout<<"指针变量交换后的结果："<<"a="<<a<<" "<<"b="<<b<<endl;
	swap(a,b);
    cout<<"引用交换后的结果："<<"a="<<a<<" "<<"b="<<b<<endl;
	return 0;
}
