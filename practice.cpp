#include<bits/stdc++.h>
using namespace std;
class Complex{
    private:
    int real,img;
    public:
    void input(){
        cout<<"enter real and imaginary no:";
        cin>>real>>img;
    }
    void add(int a,int b){
        real=real+a;
        img=img+b;
    }
    void add(Complex P){
        real=real+P.real;
        img=img +P.img;

    }
    void add(Complex P,Complex Q){
        real=P.real+Q.real;
        img=P.img+Q.img;
    }
    Complex add1(int a,int b){
        Complex m;
        m.real=real+a;
        m.img=img+b;
    }
    void show(){
        cout<<"Complex No is:"<<endl;
        cout<<real;
        if(img>=0){
            cout<<"+"<<img<<"i"<<endl;
        }
        else{
            cout<<img<<"i"<<endl;
        }
    }
};
int main(){
    Complex c1,c2,c3;
    c1.input();
    c1.show();
    c2.input();
    c2.show();
    c1.add(2,10);
    c1.show();
    c2.add(c1);
    c2.show();
    c3.add(c1,c2);
    c3.show();
    Complex q=c1.add1(5,10);
    q.show();
}