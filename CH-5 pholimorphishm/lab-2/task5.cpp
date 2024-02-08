#include <iostream> 
using namespace std; 
class A { 
private: 
    int x; 
  
public: 
    
   

    A(int l) 
	{ 
	this->x=l; 
	
	} 
  
   
    A operator &&( A n) 
    { 
        A obj; 
        obj.x =this->x && n.x; 
        return obj; 
    } 
  
    
    void result() 
    { 
        if (x) 
            cout << "Both value is non zero" << endl; 
        else
            cout << "Any one or both value is equal to zero"
                 << endl; 
    } 
}; 
  
 
int main() 
{ 
   
    A a1(100);
	A a2(50); 
    A a3; 
  
    // a3=a1.&&(a2); 
    a3 = a1 && a2; 
    a3.result(); 
    return 0; 
}
