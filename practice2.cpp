// //define a class point with two private parameter show them by help of constructor//1st version
// #include<bits/stdc++.h>
// using namespace std;
// class point{
//     private:
//     int x;
//     int y;
//     public:
//     point(int a,int b){
//         x=a;
//         y=b;

//     }
//     void show(){
//         cout<<x<<endl;
//         cout<<y<<endl;
//     }
 

// };
// int main(){
//     int a,b;
//     cin>>a>>b;
//     point c(a,b);
//     c.show();
    
// }
//2nd version
#include<bits/stdc++.h>
using namespace std;
class point{
    private:
    int x,y;
    public:
    point():x{0},y{0} {}
    point(int p,int q):x{p},y{q}
    {
        cout<<"parametrized constructor"<<endl;
    }
    point add(point q){
        // point r;
        // r.x=x+q.x;
        // r.y=y+q.y;
        // return r;
        return point(x+q.x,y+q.y);
}
    void show(){
        cout<<x<<","<<y<<endl;
    }
};
int main(){
    point p(5,10),q(20,50);
    p.show();
    q.show();
    point r=p.add(q);
    r.show();
    return 0;
}