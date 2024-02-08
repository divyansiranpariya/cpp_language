#include<iostream>
using namespace std;
class Student{
	private:
		int id,age;
		string name,course,email,city,clg;
		
		public:
			setdata(){
				cout<<"enter your id:";
				cin>>this->id;
				cout<<"enter your name:";
				cin>>this->name;
				cout<<"enter your age:";
				cin>>this->age;
				cout<<"enter your course:";
				cin>>this->course;
				cout<<"enter your email:";
				cin>>this->email;
				cout<<"enter your city:";
				cin>>this->city;
				cout<<"enter your clg:";
				cin>>this->clg;
				cout<<endl;
			}
		
			getdata(){
				cout<<"Id:"<<this->id<<endl;
				cout<<"Name:"<<this->name<<endl;
				cout<<"age:"<<this->age<<endl;
				cout<<"course:"<<this->course<<endl;
				cout<<"email:"<<this->email<<endl;
				cout<<"city:"<<this->city<<endl;
				cout<<"collage"<<this->clg<<endl;
				cout<<endl;
			}
};
int main(){
	Student s1,s2,s3,s4,s5;
	s1.setdata();
	s2.setdata();
	s3.setdata();
	s4.setdata();
	s5.setdata();
	
	
	s1.getdata();
	s2.getdata();
	s3.getdata();
	s4.getdata();
	s5.getdata();
	return 0;
	
}
