#include<iostream>
using namespace std;
class time{
	public:
	int sec;
};
int main(){
	int minute,hour,second;
	time s;
	
	cout<<"enter seconds:";
	cin>>s.sec;
	cout<<endl;
	minute=s.sec /60;
    s.sec=s.sec%60;
	hour=minute/60;
	minute=minute%60;
	cout<<hour<<"::"<< minute<<"::"<<s.sec ;
}
