#include<iostream> 
#include<string> 
using namespace std; 
  
class Number{ 


  private: 
    int x;
	
	 
    public: 
       Number(int i){ 
          
            this->x=i; 
        } 
        
        
        bool operator == (Number n){ 
            if (this->x == n.x) 
                return true; 
            return false; 
        } 
}; 
int main(){ 
    Number s1(50); 
    Number s2(50); 
    if (s1==s2) 
        cout<<"Equivalent"<<endl; 
    else
        cout<<"Not Equivalent"<<endl; 
}
