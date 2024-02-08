#include<iostream>
using namespace std;

class Bank{
	
	private:
		int id;
		string ud;
		string pwd;
		int acntnum;
	    string name;
	    int balance;
	    string email;
	    int transiction[100];
	    int transCount = 0;
	    int amt;
	  
	    
	    public:
	    	
	    	addTransiction(int trns)
			 {
	    		transiction[transCount] = trns;
	    		transCount++;
			}
	    	
	    	string getud()
	    	{
	    		return this->ud;
	    		
			}
			
			string getpwd()
			{
				return this->pwd;	
			}

	    	
	    	setdata(string ud,string pwd,int id,string name,int acntnum,int balance,string email)
	    	{
	    		this->id=id;
	    		this->ud=ud;
	    		this->pwd=pwd;
	    		this->name=name;
	    		this->acntnum=acntnum;
	    		this->balance=balance;
	    		this->email=email;
	    		
			}
			getdata()
			{
				cout<<"\t\t\t\t\t\tID\t\t:"<<this->id<<endl;
	        	cout<<"\t\t\t\t\t\tNAME\t\t:"<<this->name<<endl;
	    		cout<<"\t\t\t\t\t\tACCOUNT NUMBER  :"<<this->acntnum<<endl;
	         	cout<<"\t\t\t\t\t\tACCOUNT BALANCE  :"<<this->balance<<endl;
	    		cout<<"\t\t\t\t\t\tEMAIL\t\t:"<<this->email<<endl;
								
			}
			  	
	    void deposit()
    {
        cout<<"\t\t\t----------------------------------------------------------------------------------------------"<<endl;
        cout<<endl<<endl<<endl;
        cout << "\t\t\t\t\t\tEnter Amount U want to deposit:";
        cin >>amt;
        this->balance =this->balance +amt;
    }
        void withdrawal()
    {
         cout<<"\t\t\t----------------------------------------------------------------------------------------------"<<endl;
         cout<<endl<<endl<<endl;
          cout << "\t\t\t\t\t\tEnter Amount U want to withdraw: ";
          cin >>amt;
        if (amt<=balance)
            this->balance = this->balance - amt;
        else
            cout << "Less Balance..." << endl;
    }
			int Search(int);
};
int Bank::Search(int a)
{
    if ( acntnum== a) {
        getdata();
        return (1);
    }
    return (0);
}
int main()
{
	int i,ch,choice,a;
	string pd,us;
	int found=0;
	Bank b1[5];
	b1[0].setdata("abc","anshi12",11,"anshi",9327685,20000,"anshi@gmail.com");
	b1[1].setdata("def","mani34",12,"manshi",6454736,20000,"anshi@gmail.com");
	b1[2].setdata("ghj","nenc59",13,"nenshi",3478734,20000,"anshi@gmail.com");
	b1[3].setdata("iop","jnc98",14,"jenshi",2483464,20000,"anshi@gmail.com");
	b1[4].setdata("weq","pri46",15,"priyanshi",9904043,20000,"anshi@gmail.com");
	
	cout<<"\t\t========================================================================="<<endl;
	cout<<"\t\t\t\t\t    WELCOME TO BOB"<<endl;
	cout<<"\t\t========================================================================="<<endl;
		system("pause");
	    system("CLS");
	

	cout<<"\t\t\t***************************************************************************"<<endl;
	cout<<"\t\t\t\t\t\tpress 1 for login as admin:"<<endl;
	cout<<"\t\t\t\t\t\tpress 2 for login as user:"<<endl;
    cout<<"\t\t\t***************************************************************************"<<endl;
	
	cout<<endl<<endl<<endl;
	cout<<"\t\t\t\t\t\t   eneter your choice:";
	cin>>ch;
	

	switch(ch)
	{
	
		case 1:
			cout<<"------------------------------------------------------------"<<endl;
			cout<<"you have successfully login"<<endl;
			cout<<"------------------------------------------------------------"<<endl;
			break;
			
			case 2:
				cout<<"\t\t\t------------------------------------------------------------------------------"<<endl;
				cout<<"\t\t\t\t\t\t   enter your id:";
				cin>>us;
				cout<<endl;
				cout<<"\t\t\t\t\t\t   enter your password:";
				cin>>pd;
			cout<<"\t\t\t------------------------------------------------------------------------------"<<endl;
				
				cout<<endl<<endl<<endl<<endl<<endl;
			
				for(i=0;i<5;i++)
				{
					if(b1[i].getud()==us && b1[i].getpwd()==pd)
					{
						cout<<"\t\t\t*********************************************************************************"<<endl;
						cout<<"\t\t\t\t\t\t  you have successfully login"<<endl;
						cout<<"\t\t\t*********************************************************************************"<<endl;
			
	
	cout<<endl<<endl;
	system("pause");
	system("CLS");
	
	
	cout<<"\t\t\t==================================================================================="<<endl;
	cout<<"\t\t\t\t\t\tpress 1 for display your account balance:"<<endl;
	cout<<"\t\t\t\t\t\tpress 2 for deposite :"<<endl;
	cout<<"\t\t\t\t\t\tpress 3 for withdrow :"<<endl;
    cout<<"\t\t\t==================================================================================="<<endl;
	
	cout<<endl<<endl<<endl;
	cout<<"\t\t\t\t\t\t  eneter your choice:";
	cin>>choice;
	cout<<"\t\t\t-------------------------------------------------------------------------------------"<<endl;
	
	cout<<endl<<endl;
	system("pause");
	system("CLS");
	
	switch(choice)
	{
		case 1:
			for(i=0;i<5;i++)
			{
				cout<<"\t\t\t============================================================================="<<endl;
			cout << "\t\t\tAccount Number: ";
            cin >> a;
            cout<<"\t\t\t================================================================================="<<endl;
			b1[i].getdata();
			break;
		}
			break;
			
			case 2:
				cout<<"\t\t\t================================================================================="<<endl;
			cout << "\t\t\t\t\tenetr Account Number for Deposit Amount: ";
            cin >> a;
               cout<<"\t\t\t=================================================================================="<<endl;
            cout<<endl<<endl<<endl;
            for (i=0;i<5;i++) {
                found = b1[i].Search(a);
                if (found) {
                    b1[i].deposit();
                    b1[i].addTransiction(a);
                    cout<<endl<<endl<<endl;
                     cout<<"\t\t\t----------------------------------------------------------------------------------------------"<<endl;
                    b1[i].getdata();
                    break;
                }
            }
            if (!found)
                cout << "\t\t\tRecord Not Found" << endl;
            break;
				
				case 3:
				cout<<"\t\t\t============================================================================="<<endl;
				cout << "\t\t\tenter Account Number for Withdraw Amount: ";
            cin >> a;
            cout<<"\t\t\t================================================================================="<<endl;
            cout<<endl<<endl<<endl;
            for (i=0;i<5;i++) {
                found = b1[i].Search(a);
                if (found) {
                    b1[i].withdrawal();
                    cout<<endl<<endl<<endl;
                     cout<<"\t\t\t----------------------------------------------------------------------------------------------"<<endl;
                    b1[i].getdata();
                    break;
                }
            }
            if (!found)
                cout << "\t\t\tRecord Not Found" << endl;
            break;
					default:
						cout<<"\t\t\tinvalid chioice:";
						break;
	}
}
}
break;
}
	return 0;

}
