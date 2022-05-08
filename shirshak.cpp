#include <iostream>
using namespace std;
class Rational
{
    int n, d;

public:
    Rational()
    {
        n = 0;
        d = 0;
    }
    Rational(int a, int b)
    {
        n = a;
        d = b;
    }
    void display()
    {
        cout << "Rational = " << n << " / " << d << endl;
    }
    Rational operator+(Rational R1)
    {
        Rational R2;
        R2.n = (R1.n * d) + (R1.d * n);
        R2.d = (R1.d * d);
        return R2;
    }
};
int main()
{
    Rational R1(3, 3), R2(3,3), R3;
    R1.display();
    R2.display();
    R3 = R1 + R2;
    cout << "after add : " << endl;
    R3.display();
    return 0;
}