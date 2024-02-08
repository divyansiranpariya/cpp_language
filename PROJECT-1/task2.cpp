#include<iostream>
using namespace std;
class time{
	public:
	int hr,min,sec;
};
 int main(){
 	int second,minute,hour;
	time o1,o2,o3;
	
	cout<<"enter hours:";
	cin>>o1.hr;
		cout<<"enter minutes:";
	cin>>o1.min;
		cout<<"enter seconds:";
	cin>>o1.sec;
	
	
	cout<<"enter hours:";
	cin>>o2.hr;
		cout<<"enter minutes:";
	cin>>o2.min;
		cout<<"enter seconds:";
	cin>>o2.sec;
	
	o3.sec=o1.sec+o2.sec;
	o3.min=o1.min+o2.min+(o3.sec/60);
	o3.hr=o1.hr+o2.hr+(o3.min/60);
	o3.min=o3.min %60;
	o3.sec=o3.sec%60;
	
	cout<<endl;
	cout<<o3.hr<<"hours "<<o3.min<<"minutes "<<o3.sec<<"seconds";
	
return 0;
}
