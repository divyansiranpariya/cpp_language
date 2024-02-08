#include<iostream>
using namespace std;
int sum(int p,int q)
{
	return p+q;
}

int sub(int p,int q)
{
	return p-q;
}
int mul(int p,int q)
{
	return p*q;
}
int div(int p,int q)
{
	return p/q;
}
int modual(int p,int q)
{
	return p%q;
}
int main(){
	int a,b,ch,i;
	for(i=ch;i<=0;ch++){
		cout<<"press 1 for +"<<endl;
			cout<<"press 2 for -"<<endl;
				cout<<"press 3 for *"<<endl;
					cout<<"press 4 for /"<<endl;
						cout<<"press 0 for the exit "<<endl;
						
						cout<<endl;
						
						cout <<"enter your choice=";
						cin>>ch;
						cout<<endl;
						
						if(ch==0){
							break;
						}
						else if(ch>6)
						{
							cout<<"enter valid number...";
						}
						cout<<"enter first number=";
						cin>>a;
						cout<<"enter second number=";
						cin>>b;
						
						switch(ch){
							case 1:
								cout<<"Addition is :"<<sum(a,b)<<endl;
								break;
								case 2:
								cout<<"subtraction is :"<<sub(a,b)<<endl;
								break;
								case 3:
								cout<<"multiplication is :"<<mul(a,b)<<endl;
								break;
								case 4:
								cout<<"divison is :"<<div(a,b)<<endl;
								break;
								
								case 5:
								cout<<"modual is :"<<modual(a,b)<<endl;
								break;
								default :
									cout<<"invalid number";
						}
						cout<<endl;
						
	}
}


