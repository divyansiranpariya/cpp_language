#include<iostream>
using namespace std;
class employ{
	public:
		int id,age,sal,exp;
		string name,role,city,cmpn;
};
int main(){
	int i;
	employ emp[5];
	for(i=0;i<5;i++){
		cout<<"enter your id:";
		cin>>emp[i].id ;
		cout<<"enter your name:";
		cin>>emp[i].name ;
		cout<<"enter your role:";
		cin>>emp[i].role ;
		cout<<"enter your age:";
		cin>>emp[i].age ;
		cout<<"enter your salary:";
		cin>>emp[i].sal ;
		cout<<"enter your experience:";
		cin>>emp[i].exp ;
		cout<<"enter your city:";
		cin>>emp[i].city;
		cout<<"enter your company name:";
		cin>>emp[i].cmpn ;
		
	}
	cout<<endl;
	for(i=0;i<5;i++){
		cout<<"Id:"<<emp[i].id<<endl;
		cout<<"Name:"<<emp[i].name<<endl;
		cout<<"Roll no.:"<<emp[i].role<<endl;
		cout<<"Age:"<<emp[i].age<<endl;
		cout<<"salary:"<<emp[i].sal<<endl;
		cout<<"experience:"<<emp[i].exp<<endl;
		cout<<"city"<<emp[i].city<<endl;
		cout<<"company name:"<<emp[i].cmpn<<endl;
	}
	return 0;
}
