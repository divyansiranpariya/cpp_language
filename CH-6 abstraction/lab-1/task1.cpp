#include<iostream>
using namespace std;


class Admin{
	
	private:
			int rev;
		
	protected:
		
		int mansal,emplsal,totalstaff,term;
		string cmpnm;
		
		public:
		setdata()
		{
			cout<<"enter cpompany name:";
			cin>>this->cmpnm;
			cout<<"enter manager salary:";
			cin>>this->mansal;
			cout<<"enter employ salary:";
			cin>>this->emplsal;
			cout<<"enetr total staff number:";
			cin>>this->totalstaff;
			cout<<"enter total annual revenue:";
			cin>>this->rev;
			cout<<"enter terminate:";
			cin>>this->term;
			cout<<endl;
		}
		
		getdata()
		{
			cout<<"Admin:"<<endl;
		cout<<"company name:"<<cmpnm<<endl;
		cout<<"manager salary:"<<mansal<<endl;
		cout<<"employ salary:"<<emplsal<<endl;
		cout<<"total staff:"<<totalstaff<<endl;
		cout<<"can terminate:"<<term<<endl;
		cout<<"Total annual revenue:"<<rev;
		cout<<endl<<endl;
		}
};

class Manager:public Admin{
	
	public:
		
	myaccess()
	{
		cout<<"manager:"<<endl;
		cout<<"company name:"<<cmpnm<<endl;
		cout<<"manager salary:"<<mansal<<endl;
		cout<<"employ salary:"<<emplsal<<endl;
		cout<<"total staff:"<<totalstaff<<endl;
		cout<<"can terminate:"<<term<<endl;
		cout<<endl;
	}
	
};

class Employ:public Manager{
	
	public:
		
	myaccess()
	{
		cout<<"Employ:"<<endl;
		cout<<"company name:"<<cmpnm<<endl;
		cout<<"employ salary:"<<emplsal<<endl;
		cout<<"total staff:"<<totalstaff<<endl;
	}
};




int main()
{
	
	Employ e;
	
	e.setdata();
	e.getdata();
		
	e.Manager::myaccess();
	e.myaccess();
	
	return 0;
}
