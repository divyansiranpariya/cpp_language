#include <iostream>
#include <string>
using namespace std;

class Train {
private:
    int num, time;
    string name, src, des;

public:
    Train() {
        cout<<"enter train number:";
			cin>>this->num;
			cout<<"enter train name:";
			cin>>this->name;
			cout<<"enter train source:";
			cin>>this->src;
			cout<<"enter train destination:";
			cin>>this->des;
			cout<<"enter train time:";
			cin>>this->time;
			cout<<endl;
    }

    void show() {
        cout << "Train number: " << this->num << endl;
        cout << "Train name: " << this->name << endl;
        cout << "Train source: " << this->src << endl;
        cout << "Train destination: " << this->des << endl;
        cout << "Train time: " << this->time << endl;
        cout << endl;
    }

    int search(int);
};

int Train::search(int a) {
	
    if (num == a) {
        show();
        return 1;
    }
    return 0;
}

int main(){
    int n, no, found = 0;

    cout << "How many train records do you want to create: ";
    cin >> n;
if(n<3)
{
	cout<<"can't display record";
}
else
{

    Train t[n];

    cout << "Enter train number to search: ";
    cin >> no;

    for (int i = 0; i < n; i++) {
        found = t[i].search(no);
        if (found)
            break;
    }

    if (!found)
        cout << "Train not found!" << endl;
}
    return 0;
}

