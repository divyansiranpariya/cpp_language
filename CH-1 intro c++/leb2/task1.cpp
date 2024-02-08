#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"enter number:";
	cin>>n;
	cout<<endl;
	int ar[n],i,f;
	for(i=1;i<=n;i++){
		cout<<"enter number:";
		cin>>ar[i];
		}
			for(i=1;i<=n;i++){
          f=1;
		while(ar[i]>0)
		{
			f=f*ar[i];
			ar[i]--;
		
	}
		cout<<f<<endl;
	}
return 0;
}
