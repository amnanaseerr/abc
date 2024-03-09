#include<iostream>
using namespace std;
int main()
{
	int x,y;
	char op;
	cout<<"Enter two numbers: "<<endl;
	cin>>x>>y;
	cout<<"Enter the operation to be performed('+','-','*','/'): ";
	cin>>op;
	switch(op)
	{
		case '+':
			cout<<"Sum of "<<x<<" and "<<y<<" is "<<x+y;
			break;
		case '-':
			cout<<"Difference of "<<x<<" and "<<y<<" is "<<x-y;
			break;
		case '*':
			cout<<"Mutiplication of "<<x<<" and "<<y<<" is "<<x*y;
			break;
		case '/':
			cout<<"Division of "<<x<<" and "<<y<<" is "<<x/y;
			break;
	}
}
















