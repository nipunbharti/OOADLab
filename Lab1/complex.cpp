#include <iostream>
#include <stdlib.h>
using namespace std;

class complex{
	private:
		int a,b,c,d;
	public:
		void input();
		void add();
		void subtract();
		void multiply();
		void divide();
};

void complex :: input()
{
	cout<<"Enter the first complex number:"<<endl;
	cout<<"Real part:";
	cin>>a;
	cout<<"Imaginary Part:";
	cin>>b;
	cout<<"Enter the second complex number:"<<endl;
	cout<<"Real part:";
	cin>>c;
	cout<<"Imaginary Part:";
	cin>>d;
}

void complex :: add()
{
	cout<<"Addition:"<<a+c<<"+ i"<<b+d<<endl;
}

void complex :: subtract()
{
	cout<<"Subtract:"<<a-c<<"+ i("<<b-d<<")"<<endl;
}

void complex :: multiply()
{
	int r = a*c - b*d;
	int i = a*d + b*c;
	cout<<"Multiplication:"<<r<<"+ i("<<i<<")"<<endl;
}

void complex :: divide()
{
	float r = (a*c + b*d)/(c*c + d*d);
	float i = (c*b - a*d)/(c*c + d*d);
	cout<<"Division:"<<r<<"+ i("<<i<<")"<<endl;
}
int main()
{
	complex c;
	int ch=0;
	while(1){
		cout<<"1.Enter the complex numbers\n2.Add\n3.Subtract\n4.Divide\n5.Multiply\n6.Exit\n";
		cin>>ch;
		switch(ch)
		{
			case 1:
				c.input();
				break;
			case 2:
				c.add();
				break;
			case 3:
				c.subtract();
				break;
			case 4:
				c.divide();
				break;
			case 5:
				c.multiply();
				break;
			case 6:
				exit(0);
				break;
			default:
				cout<<"Wrong choice.\n";
		}
	}
	return 0;
}