#include<iostream>
using namespace std;
class complex
{
    public:
        complex(){real=imag=0.0;}
        complex(double r){real=r;imag=0.0;}
        complex(double r,double i){real=r;imag=i;}
        friend complex operator + (const complex &c1,const complex &c2);
        friend complex operator - (const complex &c1,const complex &c2);
        friend complex operator * (const complex &c1,const complex &c2);
        friend complex operator / (const complex &c1,const complex &c2);
        friend void print(const complex &c);
    private:
        double real,imag;
};
complex operator + (const complex &c1,const complex &c2)
{
    return complex(c1.real+c2.real,c1.imag+c2.imag);
}
complex operator - (const complex &c1,const complex &c2)
{
    return complex(c1.real-c2.real,c1.imag-c2.imag);
}
complex operator * (const complex &c1,const complex &c2)
{
    return complex(c1.real*c2.real-c1.imag*c2.imag,c1.real*c2.imag+c1.imag*c2.real);
}
complex operator / (const complex &c1,const complex &c2)
{
    return complex((c1.real*c2.real+c1.imag*c2.imag)/(c2.real*c2.real+c2.imag*c2.imag),(c1.imag*c2.real-c1.real*c2.imag)/(c2.real*c2.real+c2.imag*c2.imag));
}
void print(const complex &c)
{
    if(c.imag<0)
        cout<<c.real<<c.imag<<"i";
    else
        cout<<c.real<<"+"<<c.imag<<"i";
}
int main()
{
    complex c1(2.0),c2(3.0,-1.0),c3;
    c3=c1+c2;
    cout<<"\nc1+c2= ";
    print(c3);
    c3=c1-c2;
    cout<<"\nc1-c2= ";
    print(c3);
    c3=c1*c2;
    cout<<"\nc1*c2= ";
    print(c3);
    c3=c1/c2;
    cout<<"\nc1/c2= ";
    print(c3);
    c3=(c1+c2)*(c1-c2)*c2/c1;
    cout<<"\n(c1+c2)*(c1-c2)*c2/c1= ";
    print(c3);
    cout<<endl;
    return 0;
}