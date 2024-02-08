#include<iostream>
using namespace std;
 
 class Number{
 	
 	private:
 		int n=8;
 	public:
 		
 		int getn(){
 			return n;
		 }
 	
 };
 
 class Square:public Number{
 	
 	public:
 		
 		sqr(){
 			int s=getn()*getn();
 			cout<<"square is:"<<s;
 			cout<<endl;
		 }
 };
 
 class Cube:public Number{
 	
 	public:
 		
 		cb(){
 			int c=getn()*getn()*getn();
 			cout<<"cube is:"<<c;
		 }
 };
 
 
 int main(){
 	
 	Square s1;
 	Cube c1;
 	
 	s1.sqr();
 	c1.cb();
 }
