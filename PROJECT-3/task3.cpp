#include<iostream>
using namespace std;

class Animal {
public:
    string name,place,color;
    int age,speed;

public:
     void setvalue() {
        cout << "Enter zebra name: ";
        cin >> this->name;
        cout<<"Enter age: ";
        cin>>this->age;
        cout<<"enter place of origin:";
        cin>>this->place;
        cout<<"enter speed of run:";
        cin>>this->speed;
         cout<<endl;
        
        
    }
    
  void setval(){
    	cout << "Enter dolphine name: ";
        cin >> this->name;
        cout << "Enter age: ";
        cin >> this->age;
        cout<<"enter place of origin:";
        cin>>this->place;
        cout<<"enter dolphine color:";
        cin>>this->color;
         cout<<endl;
        
	}
};

class Zebra:public Animal {
 public:
 	
    void getdata() {
        cout << "zebra Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout<<"Place of origin:"<<place<<endl;
        cout<<"speed:"<<speed<<"km/h";
        cout<<endl<<endl;
        
    }
};

class Dolphin:  public Animal {
  public:

        void getvalue() {
        cout << "Dolphine Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout<<"Place of origin:"<<place;
        cout<<"Color:"<<color;
    }
};

int main() {
    Zebra z;
    Dolphin d;

    cout << "Enter details for Zebra:"<< endl;
    z.setvalue();
    z.getdata();

    cout << "Enter details for Dolphin:"<< endl;
    d.setval();
    d.getvalue();

    return 0;
}

