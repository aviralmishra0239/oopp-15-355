#include<bits/stdc++.h>
using namespace std ;

class point {
    int x , y ;
    public :
    point(int x=0 , int y=0):x{x},y{y}{}
    
    // void show(){
    //     cout<<x<<" , "<<y<<endl;
    // }

//  // friend void operator<<(ostream &os , point p);

friend ostream &operator<<(ostream &os , point p);

    point operator+(point p){
        int a = x + p.x ;
        int b = y + p.y ;
        point q(a,b);
        return q;
    }
};

// // void operator<<(ostream &os , point p){
// //     cout<<p.x<<" "<<p.y<<endl;
// // }

ostream &operator<<(ostream &os , point p){
    os<<p.x<<" "<<p.y<<endl;
    return os; 
}

int main(){
    point p1(10,5);
    point p2(-9,16);
    point p3 = p1 + p2 ;
    // p1.show();
    // p2.show();
    // p3.show();
// //   cout<<p1;
// //   cout<<p2;
// //   cout<<p3;
    cout<<p1<<p2<<p3; // method chaining 
}