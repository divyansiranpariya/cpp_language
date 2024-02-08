#include<iostream>
using namespace std;

class super {
private:
    int itmnum, qunt;
    float price, dis, amount, total;
    string name;
    
    public:
    
    super() {
        cout << "Enter item number: ";
        cin >> this->itmnum;
        cout << "Enter item name: ";
        cin >> this->name;
        cout << "Enter item quantity: ";
        cin >> this->qunt;
        cout << "Enter item price: ";
        cin >> this->price;
        cout << "Enter item discount: ";
        cin >> this->dis;
        cout<<endl;
    }

    void disp() {
        cout << "Item number   " << "Item name   " << "   Quantity" << "  Price  " << "Discount " << "\t total" << endl;
    }
    
    void show() {
        amount = price * qunt;
        total = amount - (amount * dis / 100);
        cout << this->itmnum << "\t\t" << this->name << "\t\t" << this->qunt << "\t" << this->price << "\t" << this->dis <<"%"<< "\t  " << this->total << endl;
    }

    float final() {
        return total;
    }
};

int main() {
		int id=11,password=2208,p,i;
	int n;
	float finaltotal=0;
	cout<<"enter id and password:";
	cin>>i>>p;
	if(id==i && password==p)
	{

    cout << "How many items: ";
    cin >> n;

    super s[n];
    
    s[0].disp(); 

    for (i = 0; i < n; i++) {
        s[i].show();
    }

    
    for (i = 0; i < n; i++) {
        finaltotal += s[i].final();
    }
      cout<<endl<<endl;
    cout <<"\t\t\t\t\tfinal Total: " << finaltotal << endl;
}
    return 0;
}

