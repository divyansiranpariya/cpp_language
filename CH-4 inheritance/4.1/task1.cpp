#include<iostream>
using namespace std;

class X{
	public:
	int a,b,c,sum,cb;
	cube(){
	sum=a*a*a+b*b*b+c*c*c;
}
};
class Y:public X 
{
	public:
	setdata()
	{
		cout<<"enter value a:";
		cin>>a;
		cout<<"enter value b:";
		cin>>b;	
		cout<<"enter value c:";
		cin>>c;
		cout<<endl;
	}
	
	getdata()
	{
		cout<<"sum of cube:"<<sum;
	}
	
};

int main()
{
	Y y1;
	
	y1.setdata();
	y1.cube();
	y1.getdata();
	return 0;
}
