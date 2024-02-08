#include<iostream>
using namespace std;
class Company{
	private:
		int id,staffqnt,rev,imp,exp;
		string name,ceo;
		
		public:
			Company(int id,string name,int staffqnt,int rev,int imp,int exp,string ceo){
				this->id =id;
				this->name=name;
				this->staffqnt=staffqnt;
				this->rev=rev;
				this->imp=imp;
				this->exp=exp;
				this->ceo=ceo;
			}
			
			getdata(){
				cout<<"company_id:"<<this->id<<endl;
					cout<<"company_name:"<<this->name<<endl;
					cout<<"company_staff_quantity:"<<this->staffqnt<<endl;
					cout<<"company_revenue:"<<this->rev<<endl;
					cout<<"company_import_raw:"<<this->imp<<endl;
					cout<<"company_export:"<<this->exp<<endl;
					cout<<"company_ceo:"<<this->ceo<<endl;
				cout<<endl;
			}
};



int main(){
	Company c1(1,"excellent",300,30,4500,3000,"divyanshi"),
            c2(2,"hexa",200,50,5500,3000,"disha"),
            c3(3,"precious",250,70,5300,3500,"drija"),
            c4(4,"diomond",200,40,4800,4500,"drishi"),
            c5(5,"maruti",300,50,6000,5980,"disha");
	
	c1.getdata();
	c2.getdata();
	c3.getdata();
	c4.getdata();
	c5.getdata();
	
	
return 0;
	
}
