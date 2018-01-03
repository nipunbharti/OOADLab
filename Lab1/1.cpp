#include <iostream>
#include <stdlib.h>
using namespace std;

class calculator{
	private:
		int a,b;
	public:
		void input()
		{
			cin>>a>>b;
		}
		void add()
		{
			cout<<"Addition:"<<a+b<<endl;
		}
		void subtract()
		{
			cout<<"Subtraction:"<<a-b<<endl;
		}
		void divide()
		{
			cout<<"Division:"<<a/b<<endl;
		}
		void multiply()
		{
			cout<<"Multiplication:"<<a*b<<endl;
		}
};

int main()
{
	calculator c;
	int ch=0;
	while(1){
		cout<<"1.Enter the numbers\n2.Add\n3.Subtract\n4.Divide\n5.Multiply\n6.Exit\n";
		cin>>ch;
		switch(ch)
		{
			case 1:
				cout<<"Enter the values:";
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