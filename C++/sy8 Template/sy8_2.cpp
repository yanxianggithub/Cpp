#include<iostream>
using namespace std;
template<typename T>
T max(T a,T b)
{
    return a>b?a:b;
}
int max(int a,int b)
{
    return a>b?a:b;
}
char *max(char *a,char *b)
{
    return strcmp(a,b)>0?a:b;
}
int main()
{
    cout<<"max(6,5)is "<<max(6,5)<<endl;
    cout<<"max(\"china\",\"japan\")is"
    << max("china","japan")<<endl;
    return 0;
}
