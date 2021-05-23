#include<iostream>
using namespace std;
const double PI = 3.1415;
class Shap
{
public:
    virtual double Area() = 0;
};
class Triangle :public Shap
{
public:
    Triangle(double h, double w) { H = h; W = w; }
    double Area() { return 0.5 * H * W; }
private:
    double H, W;
};
class Rectangle :public Shap
{

public:;
      Rectangle(double h, double w) { H = h; W = w; }
      double Area() { return H * W; }
private:
    double H, W;
};
class Circle :public Shap
{
public:
    Circle(double r) { R = r; }
    double Area() { return PI * R * R; }
private:
    double R;
};
class Square :public Shap
{
public:
    Square(double s) { S = s; }
    double Area() { return S * S; }
private:
    double S;
};
double Total(Shap* s[], int n)
{
    double sum = 0;
    for (int i = 0; i < n; i++)
        sum += s[i]->Area();
    return sum;
}
int main()
{
    Shap* s[5];
    s[0] = new Square(8.0);
    s[1] = new Rectangle(3.0, 8.0);
    s[2] = new Square(12.0);
    s[3] = new Circle(8.0);
    s[4] = new Triangle(5.0, 4.0);
    double sum = Total(s, 5);
    cout << "SUM = " << sum << endl;
    return 0;
}
