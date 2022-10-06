#include"iostream"
using namespace std;

int main()
{
    int a=50;
    float b=4.5;
    int *p1=&a;
    float *p2=&b;
    cout<<"value of a is "<<a<<endl;
    cout<<"value of b is "<<b<<endl;
    cout<<"value of a is "<<*p1<<endl;
    cout<<"value of b is "<<*p2<<endl;

}
