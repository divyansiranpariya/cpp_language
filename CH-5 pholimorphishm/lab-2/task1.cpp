#include<iostream>
using namespace std;

class Number{
	
	public:
		int x;
		
		public:
			void setdata(int i)
			{
				this->x=i;
			}
			
			Number operator*(Number n)
			{
				Number mul;
				mul.x=this->x*n.x;
				return mul;
			}
			getdata()
			{
				cout<<"multiplication of both value:"<<this->x;
			}
};

int main(){
	Number n1,n2,n3;
	
	n1.setdata(5);
	n2.setdata(2);
	
	n3=n1*n2;
	
	n3.getdata();;
	return 0;
}
