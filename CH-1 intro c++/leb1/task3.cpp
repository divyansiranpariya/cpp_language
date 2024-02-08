#include<iostream>
using namespace std;

int main() {
    int a[300]; 
    int i;
cout<<"Leap years between 2020 and 3030 "<<endl;
    for (i=2020;i<=3030;i++) {
    	
        if(i%4==0 || i%400==0 && i%100!=0) 
		{
          cout<<i<<endl;  
        }
}

    return 0;
}


