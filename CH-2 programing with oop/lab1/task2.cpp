#include<iostream>
using namespace std;
class car{
	public:
	int id,year;
	string clr,mdl,cmpn;
};
int main(){
	int i;
	 car c[4];
	
	 for(i=0;i<4;i++){
	 	cout<<"enter your id: ";
	 	cin>>c[i].id;
	 	cout<<"enter your car company name: ";
	 	cin>>c[i].cmpn;
	 	cout<<"enter your car color: ";
	 	cin>>c[i].clr;
	 	cout<<"enter your car model: ";
	 	cin>>c[i].mdl;
	 	cout<<"enter your car release year: ";
	 	cin>>c[i].year;
	 }
	cout<<endl;
	
	for(i=0;i<4;i++){
		cout<<"Id:"<<c[i].id<<endl;
		cout<<"Car company:"<<c[i].cmpn<<endl;
		cout<<"car color:"<<c[i].clr<<endl;
		cout<<"car model:"<<c[i].mdl<<endl;
		cout<<"car release year:"<<c[i].year<<endl;
		
	}
	
	return 0;
	
}

