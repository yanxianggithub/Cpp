#include<iostream>
using namespace std;
class My
{
public:
    My(int aa)
    {
        A = aa;
        B -= aa;
    }
    static void fun(My m);
private:
    int A;
    static int B;
};
void My::fun(My m)
{
    cout << "A=" << m.A << endl;
    cout << "B=" << B << endl;
}
int My::B = 100;
int main()
{
    My p(6), Q(8);
    My::fun(p);
    Q.fun(Q);
return 0;
}
