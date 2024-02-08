#include<iostream>
using namespace std;
class dis{
	public:
	int inch,feet;
};
int main(){
   dis ob1,ob2,ob3;
   cout<<"enter feet:";
   cin>>ob1.feet;
   cout<<"enter inch:";
   cin>>ob1.inch ;

   cout<<"enter feet:";
   cin>>ob2.feet;
   cout<<"enter inch:";
   cin>>ob2.inch ;
   
   
  ob3.feet =((ob1.feet +ob2.feet)+(ob1.inch+ob2.inch)/12);
  ob3.inch=(ob1.inch +ob2.inch )%12;
  
  cout<<ob3.feet<<"feet" <<ob3.inch<<"inch";
   
   return 0;
   
}
