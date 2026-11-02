#include<bits/stdc++.h>
using namespace std;
class item{
string name ;
    int quality ;
    double price ;
    static double total;
    public:
    item(string n,int q, double p):name(n),quality(q),price(p){
        total+=p;
    }
    void display(){
        cout<<"Name: "<<name<<endl;
        cout<<"Quality: "<<quality<<endl;
        cout<<"Price: "<<price<<endl;
    }
void Totalamount(){
        cout<<"Total Amount payable: "<<total<<endl;
    }
void discount(item &i){
        if(i.price>1000) price = price-(price)/10 ;
    }
    };
double item::total=0;
int main(){
    item i1("Shoes",9,1650.66);
    item i2("Shirt",7,498.99);
    i1.display();
    i2.display();
    i1.Totalamount();
    i1.discount(i1);
}