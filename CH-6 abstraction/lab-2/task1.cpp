#include<iostream>
using namespace std;

class shape{
	public:
			
			virtual void cal()=0;
			
};
class circle:public shape{
	
	protected:
		double r,cle;
		
		public:
			
			
			void setdata()
			{
				cout<<"enter a radius:";
				cin>>r;
			}
			
			
			
			void cal() {
				cle=3.14*r*r;
				cout<<"area of circle: "<<cle<<endl;
				cout<<endl<<endl;
			}
		
			
};

class Triangle:public shape{
	
	protected:
		double tngl,length,base;
		
		public:
			
			
		  void setdata()
			{
				cout<<"enter a length:";
				cin>>length;
				
				cout<<"enter a base:";
				cin>>base;
				cout<<endl;
			}
			
			
			
			void cal() {
				
			 tngl=length*base/2;
			 
			 cout<<"area of triangle"<<tngl;
	      	cout<<endl<<endl;
			}
		
			
};

class Rectangle:public shape{
	
	protected:
		double rect,height,base;
		
		public:
			
			
		  void setdata()
			{
				cout<<"enter a height:";
				cin>>height;
				
				cout<<"enter a base:";
				cin>>base;
				cout<<endl;
			}
			
			
			
			void cal() {
				
			 rect=height*base;
			 
			 cout<<"area of rectangle:"<<rect;
		
			}
		};



int main()
{
	circle c;
	c.setdata();
	c.cal();
	
	Triangle t;
	
	t.setdata();
	t.cal();
	
	Rectangle r;
	
	r.setdata();
	r.cal();
	return 0;
}
