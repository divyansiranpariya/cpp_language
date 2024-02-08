#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"enter number:";
	cin>>n;
	cout<<endl;
	int ar[n],i;
	for(i=0;i<=n;i++){
		cout<<"enter number:";
		cin>>ar[i];
}
cout<<endl;
	for(i=0;i<=n;i++){
		if(ar[i]%2==0){
			cout<<"even number="<<ar[i]<<endl;
			
		}
	}
}
