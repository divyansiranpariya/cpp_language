#include<iostream>
using namespace std;

class cafe{
	
	private:
		int id,year,staffqnt;
		string name,type,rating;
		static string loc;
		
		public:
			cafe(){
				cout<<"enter cafe id:";
				cin>>this->id;
				cout<<"enter cafe name:";
				cin>>this->name;
				cout<<"enter cafe type:";
				cin>>this->type;
				cout<<"enter cafe rating:";
				cin>>this->rating;
				cout<<"enter cafe eastablish year:";
				cin>>this->year;
				cout<<"enter staff quantity:";
				cin>>this->staffqnt;
				
			}
			
			getdata(){
				cout<<"id:"<<this->id<<endl;
				cout<<"name:"<<this->name<<endl;
				cout<<"type:"<<this->type<<endl;
				cout<<"rating:"<<this->rating<<endl;
				cout<<"establish year:"<<this->year<<endl;
				cout<<"staff quantity:"<<this->staffqnt<<endl;
				cout<<endl;
			}
			
		static getloc(){
				cout<<"enter cafe location:"<<loc;
				cout<<endl;
			}
			
};

string cafe::loc="baroda";

int main(){
	
	int i,n;
	
	cout<<"how many get cafe deatails: ";
	cin>>n;
	cafe c[n];
	
	for(i=0;i<n;i++){
		c[i].getdata();
		c[i].getloc();
	}
	
	return 0;
}
