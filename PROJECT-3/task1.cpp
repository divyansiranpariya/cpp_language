#include<iostream>
using namespace std;
 
 class Shape{
 	
 	private:
 		int height;
 		int width;
 		
 		public:
 		int geth(){
 			return height;
		 }
		 	int getw(){
 			return width;
		 }
 		
 		Shape(){
 			
 		cout<<"enter a height:";
 		cin>>height;
 		cout<<"enter a width:";
 		cin>>width;
     	cout<<endl<<endl;
 		
		 }
 };
 
 class Triangle:public Shape{
 	private:
 		int a;
 		
 		public:
 		area()
		{
 			a=	geth()*getw()/2;
 			cout<<"area of triangle :"<<a<<endl;
 			cout<<endl<<endl;
 			
		 }
 };
 
 
 class Rectangle:public Shape{
 	private:
 		int a;
 		public:
 		area()
		{
 		a=geth()*getw();
 			cout<<"area of rectangle :"<<a<<endl;
 			
		 }
 };
 
 
 int main(){
 	
 	Triangle t;
 	Rectangle r;
 	
t.area();
r.area();
	 
 	
 	
 	return 0;
 }
