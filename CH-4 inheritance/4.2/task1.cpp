#include<iostream>
using namespace std;

class RBI{
	private:
		int p=5000,n=1;
		double ros,rob,roi;
		
		public:
			int getp()
			{
				return p;
			}
			int getn()
			{
				return n;
			}
			
			double getros()
			{
				return ros;
			}
				double getrob()
			{
				return rob;
			}
				double getroi()
			{
				return roi;
			}
			setROS()
			{
			    cout<<"enter the rate of sbi:";
				cin>>this->ros;
			}
			
			setROB() 
			{
				cout<<"enter the rate of bob:";
				cin>>this->rob;
			}

			setROI() 
			{
				cout<<"enter the rate of icic:";
				cin>>this->roi;	
			}		
};
class SBI:public RBI{
	
	public:
	getROI()
	{
		setROS();
	double	i=getp()*getros()*getn()/100;
		cout<<"interest of SBI bank:"<<i<<endl;
		cout<<endl;
	}
};
class BOB:public RBI{

	public:
		getROI()
	{
		setROB();
	double	i=getp()*getrob()*getn()/100;
		cout<<"interest of BOB bank:"<<i<<endl;
			cout<<endl;
	}
};
class ICIC:public RBI{
	public:
		getROI()
	{
		setROI();
	double	i=getp()*getroi()*getn()/100;
		cout<<"interest of ICIC bank:"<<i<<endl;
			cout<<endl;
	}

};
 int main()
 {
 	SBI s;
 	BOB b;
 	ICIC c;
 	
    s.getROI();
    b.getROI();
    c.getROI();

 	
 	return 0;
 }
