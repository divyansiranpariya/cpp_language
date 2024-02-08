#include<iostream>
using namespace std;

class Arith{
	
	public:
		int a,b,c,d,e;
		int div,sub,add,mul;
	
};

class Arith2:public Arith{
	
	public:
	calculate(int a,int b)
	{
	    this->a=a;
        this->b=b;
		div=this->a/this->b;
		cout<<"divison:"<<div<<endl;
	}
	
	calculate(int a,int b,int c)
	{
		this->a=a;
        this->b=b;
        this->c=c;
	   sub=this->a-this->b-this->c;
	   	cout<<"subtraction:"<<sub<<endl;
	}
	
	calculate(int a,int b,int c,int d)
	{
	    this->a=a;
        this->b=b;
        this->c=c;
        this->d=d;
		mul=this->a*this->b*this->c*this->d;
			cout<<"multiplication:"<<mul<<endl;
	}
	
	calculate(int a,int b,int c,int d,int e)
	{
		this->a=a;
        this->b=b;
        this->c=c;
        this->d=d;
        this->e=e;
		add=this->a+this->b+this->c+this->d+this->e;
			cout<<"addition:"<<add;
	}
	
	
};

int main()
{
	Arith2 a1;
	
 int numarg;
    cout << "Enter the number of arguments (2, 3, 4, or 5): ";
    cin >> numarg;

    switch (numarg) {
    case 2:
        a1.calculate(10,5);
        break;
    case 3:
        a1.calculate(10,5,3);
        break;
    case 4:
        a1.calculate(1,2,3,4);
        break;
    case 5:
        a1.calculate(10,10,5,10, 10);
        break;
    default:
        cout << "Invalid option" << endl;
    }
	
	return 0;

}
