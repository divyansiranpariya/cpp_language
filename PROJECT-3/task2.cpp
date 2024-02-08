
#include<iostream>
using namespace std;
 
 class Mother{
 	
 	public:
 		display()
 		{
 			cout<<"mother means Matriarch of the Household, Educator, and Role model.";
 			cout<<endl<<endl;
		 }
 		
 	};
 	
  class Daughter:public Mother{
 	
 	public:
 		display(){
		 
 			cout<<"A daughter is the sunshine of her mother's life.";
 		}
 	};
 	
 	int main()
 	{
 		
 		Daughter d;
 		
 		d.Mother::display();
 		d.display();
 		return 0;
	 }
 		
