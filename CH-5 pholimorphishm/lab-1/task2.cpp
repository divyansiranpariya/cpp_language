#include<iostream>
using namespace std;

class Cricket {
	
public:
	
    void total_over() {
        int totalover=70;
        cout << "Total overs:"<<totalover<< endl;
    }
};

class T20_Match:public Cricket {
	
public:
	
    void match_t20() {
        cout << "Total overs in T20 match: "<<20<<endl;
    }
};

class TestMatch:public Cricket {
	
public:
	
    void match_test() {
        cout << "Total overs in Test match:"<<50<<endl;
    }
};

int main() {
	
	
    T20_Match o1;
    o1.total_over() ;
    o1.match_t20();
  
    TestMatch o2;
    o2.match_test();

  
}



