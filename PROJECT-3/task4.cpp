#include<iostream>
using namespace std;
 
 class Empl{

 	private:
 	    int id,age,contact;
 		string name,email,address;
 		
 		public:
     int getid(){
 		return id;
	 }
	 
	 string getname(){
	 	return name;
	 }
	 
	 int getage(){
	 	return age;
	 }
	 
	 string getemail(){
	 	return email;
	 }
	 
	 int getcontact(){
	 	return contact;
	 }
 		
 		string getaddress(){
 			return address;
		 }
		 
 		public:
 		setdata(){
 			cout<<"enter employ id:";
 			cin>>this->id;
 			cout<<"enter employ name:";
 			cin>>this->name;
 			cout<<"enter employ age:";
 			cin>>this->age;
 			cout<<"enter employ email:";
 			cin>>this->email;
 			cout<<"enter contact no:";
 			cin>>contact;
 			cout<<"enter employ address:";
 			cin>>this->address;
		 }
 	};
 	
 	class Emp{
 		private:
 			int salary,exp;
 			string role,cpname;
 			
 			public:
 				
 				int getsalary(){
 					return salary;
				 }
 				
 				string getrole(){
 					return role;
				 }
				 
				 int getexp(){
				 	return exp;
				 }
				 
				 string getcpname(){
				 	return cpname;
				 }
 				setvalue(){
 					cout<<"enter employ role:";
 					cin>>this->role;
 					cout<<"enter employ salary:";
 					cin>>this->salary;
 					cout<<"enter employ experience:";
 					cin>>this->exp;
 					cout<<"enter company name:";
 					cin>>this->cpname;
 					
 					cout<<endl<<endl;
				 }
 		
	 };
	 
	 
	 class Employ:public Empl,public Emp{
	 	
	 	public: 
	 	
	 	getdata()
	 	{
	 		cout<<"Id:"<<this->getid()<<endl;
	 		cout<<"Name:"<<this->getname()<<endl;
	 		cout<<"Age:"<<this->getage()<<endl;
	 		cout<<"Email:"<<this->getemail()<<endl;
	 		cout<<"Contact NO:"<<this->getcontact()<<endl;
	 		cout<<"Adreess:"<<this->getaddress()<<endl;
	 		cout<<"Roll:"<<this->getrole()<<endl;
	 		cout<<"Salary:"<<this->getsalary()<<endl;
	 		cout<<"Experience:"<<this->getexp()<<endl;
	 		cout<<"Company name:"<<this->getcpname()<<endl;
		 }
	 };
	 
	 int main(){
	 	
	 	Employ e;
	 	
	 	e.setdata();
	 	e.setvalue();
	 	e.getdata();
	 }
