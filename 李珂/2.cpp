#include<iostream.h>
class fie
{           
public:
	fie(){};
void f1()
{char n;
cout<<"ÇëÊäÈë×Ö·û:\n";
cin>>n;
if(n>='a'&&n<='z')
cout<<"Yes\n";
else cout<<"No\n";
}
}
main()
{
	fie *p=new fie();
	p->f1();
	delete p;
}