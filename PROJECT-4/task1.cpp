#include<iostream>
using namespace std;

class Message {
private:
    string str;

public:
    
    Message(string i) 
	{
        this->str = i;
    }

    void print() 
	{
    	
        cout <<str<< endl;
    }

    void print(string j) {
    	
         
        cout<< str<<" " << j << endl;
    }
};

int main() {
    
    Message m1("ranpariya");
   
    m1.print();
    m1.print("divyanshi");  

    return 0;
}

