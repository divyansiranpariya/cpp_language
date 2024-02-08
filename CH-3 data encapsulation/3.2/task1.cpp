#include<iostream>
using namespace std;
class Hotel{
	private :
		int id,year,staffqnt,roomqnt;
		string name,type,rating;
		static string loc;
		
		public:
		setData(){
		cout<<"enter hotel id:";
	    cin>>this->id;
	    cout<<"enter hotel name:";
		cin>>this->name;
	    cout<<"enter hotel type:";
	    cin>>this->type;
	    cout<<"enter hotel rating:";
	    cin>>this->rating;
	    cout<<"eneter hotel establish year:";
	    cin>>this->year;
	    cout<<"enter hotel staff quantity:";
	    cin>>this->staffqnt;
	    cout<<"enter hotel room quantity:";
	    cin>>this->roomqnt;
	    
		}
		
		getData(){
			cout<<"hotel id:"<<this->id<<endl;
			cout<<"hotel name:"<<this->name<<endl;
			cout<<"hotel type:"<<this->type<<endl;
			cout<<"hotel rating:"<<this->rating<<endl;
			cout<<"hotel establish year:"<<this->year<<endl;
			cout<<"hotel staff quantity:"<<this->staffqnt<<endl;
			cout<<"hotel room quantity:"<<this->roomqnt<<endl;
			
	}
	static getloc(){
		cout<<"location:"<<loc<<endl;
		cout<<endl;
	}
};
string Hotel::loc="rajkot";


int main(){
	int n,i;
	
	cout<<"enter the number of hotels:";
	cin>>n;
	cout<<endl;
	
		Hotel h1[n];
		for(i=0;i<n;i++){
	h1[i].setData();
	cout<<endl;
}
	for(i=0;i<n;i++){

	h1[i].getData();
	h1[i].getloc();
}	
	
	return 0;
	
}
