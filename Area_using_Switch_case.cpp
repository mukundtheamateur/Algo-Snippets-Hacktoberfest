#include<iostream>
using namespace std;

int main()
{
	int n,base,height,width,length,side;
	float radius,area;
	cout<<"............Area..........."<<endl;
	cout<<"1. For triangle\n2. For Reactangle\n3. For Square\n4. For Circle\n";
	cout<<"Enter any number from 1 to 4: "<<endl;
	cin>>n;
	switch(n){
		case 1:
			{
				cout<<"Enter base and height: "<<endl;
			cin>>base>>height;
			area = (0.5)*base*height;
			cout<<"Area is "<<area;
			break;
			}
			
		case 2:
			{
				cout<<"Enter width and length: "<<endl;
			cin>>width>>length;
			area = width*length;
			cout<<"Area is "<<area;
			break;
			}
			
		case 3:
			{
				cout<<"Enter the side: "<<endl;
			cin>>side;
			area = side*side;
			cout<<"Area is "<<area;
			break;
			}
			
		case 4:
			{
			cout<<"Enter radius: "<<endl;
			cin>>radius;
			area = 3.14*radius*radius;
			cout<<"Area is "<<area;
			break;	
			}
			
		default:
			cout<<"Invalid Input"<<endl;
	}
	
	return 0;
}
