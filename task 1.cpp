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





#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main()
{
	int random = rand() % 100 + 1;
	int n,i=0;
	do{
	cout<<"enter number you guessed: "<<endl;
	cin>>n;
	i++;
	if(n<random)
	{
		cout<<"\ntoo low...";
	}
	else if(n>random)
	{
		cout<<"\ntoo high...";
	}
	else
	{
		cout<<"\nyou guessed right";
	}
}
while(n!=random);
}














