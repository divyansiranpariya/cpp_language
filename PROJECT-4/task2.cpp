#include<iostream>
using namespace std;

class Dist{
	private:
		
		int x,y;
		
		public:
			
			setdata(int a,int b)
			{
				this->x=a;
				this->y=b;
			}

Dist operator+(Dist n)
{
	Dist res;
	
	res.x=((this->x+n.x)+(this->y+n.y)/12);
	res.y=(this->y+n.y)%12;
      return res;
}

getdata()
{
	cout<<this->x<<"feet "<<this->y<<"inch";
}

};

int main(){
	
	Dist d1,d2,d3;
	
	d1.setdata(4,16);
	d2.setdata(7,14);
	
	d3=d1+d2;
	
	d3.getdata();
	return 0;
	
}
