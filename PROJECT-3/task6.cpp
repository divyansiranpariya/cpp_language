#include<iostream>
using namespace std;
 
 class A{
 	
 	public:
 	 int id,salary,exp,contact;
 	 string name,role,cmpnm,email,address;
 	 
 	 public:
 	 setdata(){
 	 	
 	 	cout<<"eneter employ id:";
 	 	cin>>this->id;
 	 	cout<<"enter employ name:";
 	 	cin>>this->name;
 	 	cout<<"enter employ role:";
 	 	cin>>this->role;
 	 	
	  }

 };
 
 class B:public A{
 	public:
 		set(){
 			cout<<"enter employ salary:";
 			cin>>this->salary;
 			cout<<"enter employ experience:";
 			cin>>this->exp;
		 }
 };
 
 class C:public B{
 	
 	public :
 		setvalue(){
 			cout<<"enter company name:";
 			cin>>this->cmpnm;
 			cout<<"enter address:";
 			cin>>this->address;
 			
		 }
		 
 };
 
 class D:public C{
 	
 	public:
 		setval(){
 			cout<<"enter employ email:";
 			cin>>this->email;
 			cout<<"enter eemploy contact no:";
 			cin>>this->contact;
 			cout<<endl<<endl;
		 }
		 
		 getdata(){
		 	cout<<"Id:"<<this->id<<endl;
	 		cout<<"Name:"<<this->name<<endl;
	 		cout<<"Role:"<<this->role<<endl;
	    	cout<<"Salary:"<<this->salary<<endl;
	    	cout<<"Experience:"<<this->exp<<endl;
	 		cout<<"Company name:"<<this->cmpnm<<endl;
	 		cout<<"Email:"<<this->email<<endl;
	 		cout<<"Adreess:"<<this->address<<endl;
	 		cout<<"Contact NO:"<<this->contact<<endl;
	 		
		 }
 		 
 		
 };
 
 int main(){
 	
 	D d;
 	d.setdata();
	 d.set();
	 d.setvalue();
	 d.setval();
	 d.getdata();	
 	return 0;
 }
