#include <iostream>
using namespace std;
class function {
    static int objectCount;
    int value;
public:
    function(int v = 0) {
        value = v;
        objectCount++;
    }
    friend void showObjectCount();
void display() {
        cout << "Value: " << value << endl;
    }
};
int function::objectCount = 0;
void showObjectCount() {
    cout << "Total objects created: " << function::objectCount << endl;
}
int main() {
    function d1(30), d2(40), d3(50);
    d1.display();
    d2.display();
    d3.display();
    showObjectCount();
    return 0;
}

