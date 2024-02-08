#include<iostream>
using namespace std;

class P{
	public:
		float cel;
		tocel()
		{
			cout<<"enetr degree celsius:";
			cin>>cel;
			cout<<endl;
			cout<<"degree celsius is :"<<cel;
			cout<<endl;
		}
	
};

class Q :public P{
	public:
		float f;
	tofehrenheit()
	{
		f=(cel*9/5)+32;
	   cout<<"fehrenheit is\t  :"<<f;
	   cout<<endl;
	}
};

class R: public Q{
	public:
		float k;
		tokelvin()
		{
			k=(f-32)*5/9+273.15;
			cout<<"kelvin is\t  :"<<k;
		}
};



int main()
{
	R r1;
	r1.tocel();
	r1.tofehrenheit();
    r1.tokelvin();
	
	return 0;
}
