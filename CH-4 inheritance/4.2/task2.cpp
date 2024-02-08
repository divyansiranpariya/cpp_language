#include<iostream>
using namespace std;

class A{
	public:
		int a;
		
		public:
		dispa()
		{
		cout<<"enter value of a:";
		cin>>a;
	}
};
class B:public A{
	public:
		int b;
		
		public:
		dispb()
		{
		cout<<"enter value of b:";
		cin>>b;
	}
};
class C:public A{
	public:
		int c;
		
		public:
		dispc()
		{
		cout<<"enter value of c:";
		cin>>c;
	}
};
class D:public B,public C{
	public:
		int d;

		public:
		dispd()
		{
		cout<<"enter value of d:";
		cin>>d;
       	}
	
	    sum()
	{
			int sum;
		sum = B::a + b + c + d;
		printf("\n");
		cout<<"sum is:"<<sum;
	
	}
};

int main()
{
	D d1;
	d1.B::dispa();
	d1.dispb();
	d1.dispc();
	d1.dispd();
	d1.sum();
	return 0;
}
