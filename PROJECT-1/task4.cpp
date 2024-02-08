#include<iostream>
using namespace std;
class house{
	public:
	int door,bed,window,chair,fan;
};
int main()
{
	int i,n;

	cout<<"enter  how many details in your house: ";
	cin>>n;
	
	house h1[n];
	
	for(i=0;i<n;i++)
	{
		cout<<"how many door in your room:";
		cin>>h1[i].door;
		cout<<"how many bed in your room:";
		cin>>h1[i].bed;
		cout<<"how many window in your room:";
		cin>>h1[i].window;
		cout<<"how many chair in your room:";
		cin>>h1[i].chair;
		cout<<"how many fan in your room:";
		cin>>h1[i].fan;
		cout<<endl;
	}
	for(i=0;i<n;i++){
	
	cout<<"Door:"<<h1[i].door<<endl;
	cout<<"Bed:"<<h1[i].bed<<endl;
    cout<<"Windoow:"<<h1[i].window<<endl;
    cout<<"Chair:"<<h1[i].chair<<endl;
    cout<<"fan:"<<h1[i].fan<<endl;
    cout<<endl;
}
return 0;	
}
