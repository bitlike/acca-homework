#include<iostream.h>
class fie
{           
public:
	fie(){};
void f1()
{int n;
cout<<"请输入f1的n:\n";
cin>>n;
if(n%3==0&&n%5==0)
cout<<"Yes\n";
else cout<<"No\n";
}
void f2()
{int n;
cout<<"请输入f2的n:\n";
cin>>n;
if(n%3==0||n%5==0)
cout<<"Yes\n";
else cout<<"No\n";
}
void f3()
{int n;
cout<<"请输入f3的n:\n";
cin>>n;
if((n%3==0&&n%5!=0)||(n%3!=0&&n%5==0))
cout<<"Yes\n";
else cout<<"No\n";
}}
main()
{fie *p=new fie();
p->f1();
p->f2();
p->f3();
delete p;


}