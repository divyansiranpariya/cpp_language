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
			
			Number operator--()
			{
				this->x--;
			}
			getdata()
			{
				cout<<"value:"<<this->x;
			}
};

int main(){
	Number n1,n2;
	
	n1.setdata(5);

     --n1;
	
	n1.getdata();
	return 0;
}
