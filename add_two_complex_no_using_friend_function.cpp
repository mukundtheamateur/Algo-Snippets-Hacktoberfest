#include<iostream>
using namespace std;

class Complex{
	int a, b;
	public:
		void input(int n1, int n2){
			a = n1;
			b = n2;
		}
		friend Complex sum(Complex o1, Complex o2);
		void show()
		{
			cout<<a<<" + "<<b<<"i"<<endl;
		}
};

Complex sum(Complex o1, Complex o2){
	Complex o3;
	o3.input((o1.a+o2.a), (o1.b+o2.b));
	return o3;
}

int main()
{
	Complex c1, c2,add;
    int a,b,c,d;
    cout<<"Enter the real part of First number: ";
    cin>>a;
    cout<<"Enter the imaginary part of First number: ";
    cin>>b;
    cout<<"Enter the real part of second number: ";
    cin>>c;
    cout<<"Enter the imaginary part of second number: ";
    cin>>d;
	c1.input(a,b);
	c2.input(c,d);
	
    cout<<"The first number is ";
	c1.show();
    cout<<"The second number is ";
	c2.show();
	
	add = sum(c1,c2);
    cout<<"The sum of the number is ";
	add.show();
	
	return 0;
}