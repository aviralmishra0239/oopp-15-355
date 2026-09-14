#include<bits/stdc++.h>
using namespace std;

class Complex {
private:
    int real, img;

public:
    void input() {
        cin >> real >> img;
    }

    void show() {
        cout << real;
        if (img >= 0) {
            cout << "+" << img << "i" << endl;
        } else {
            cout << img << "i" << endl;
        }
    }
    void add(int a,int b){
        real=real+a;
        img=img+b;
    }
};
int main(){
    Complex c1,c2;
    c1.input();
    c2.input();
    c1.show();
    c2.show();
    c1.add(2,10);
    c1.show();
}
