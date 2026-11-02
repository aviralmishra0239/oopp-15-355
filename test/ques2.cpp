// Create a class Currency  using type conversion operator, convert the object of class Currency to float and display the value in float.
#include <iostream>
using namespace std;

class Currency {
    int rs , ps;
    public:
    Currency(float amount) {
        rs = (int)amoun9t;
        ps = (amount - rs) * 100;
    }
    void show() {
        cout << "Rupeess: " << rs << " Paise: " << ps << endl;
    }
    operator float() {
        return rs + (ps / 100.0);
    }
};

int main() {
    Currency c=145.55;
    c.show();
    float amount = c;
    cout << "Amount in float: " << amount << endl;
    
    return 0;
}