#include<iostream.h>
class fie
{           
public:
	fie(){};
void f1()
{int n;
cout<<"������f1��n:\n";
cin>>n;
if(n%3==0&&n%5==0)
cout<<"Yes\n";
else cout<<"No\n";
}
void f2()
{int n;
cout<<"������f2��n:\n";
cin>>n;
if(n%3==0||n%5==0)
cout<<"Yes\n";
else cout<<"No\n";
}
void f3()
{int n;
cout<<"������f3��n:\n";
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