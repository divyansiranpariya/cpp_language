#include<iostream>
using namespace std;
class Customer{
	private:
		int id,age,simval,i;
		string name,brandnm,city;
		string mono;
		public:
			setdata(){
				cout<<"enter your id:";
				cin>>this->id;
				cout<<"enter your name:";
				cin>>this->name;
				cout<<"enter your age:";
				cin>>this->age;
				cout<<"enter your telecome brand:";
				cin>>this->brandnm;
				cout<<"enter your mobile number:";
                cin >> this->mono;
				cout<<"enter your city:";
				cin>>this->city;
				cout<<"enter your simcard validity:";
				cin>>this->simval;
			
			}
			
			getdata(){
				cout<<"Id:"<<this->id<<endl;
				cout<<"Name:"<<this->name<<endl;
				cout<<"age:"<<this->age<<endl;
				cout<<"brand name:"<<this->brandnm<<endl;
				cout<<"mobile no:"<<this->mono<<endl;
				cout<<"city:"<<this->city<<endl;
				cout<<"simcard validity"<<this->simval<<endl;
				cout<<endl;
			}

};
int main(){
	Customer c1,c2,c3,c4,c5;
	c1.setdata();
	c2.setdata();
	c3.setdata();
	c4.setdata();
	c5.setdata();
	cout<<endl;
	c1.getdata();
	c2.getdata();
	c3.getdata();
	c4.getdata();
	c5.getdata();
	return 0;
	
}
