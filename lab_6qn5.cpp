//include library

#include <iostream>

using namespace std;
//function to take two parameters and equations for sum, maximum and minimum
void sum (int& a, int& b)
{
	//enter the number and add them
	cout<<"Enter two numbers"<<endl;
	cin>>a;
	cin>>b;
	int sum;
	sum=a+b;
	cout<<"Their sum is "<< sum <<endl;
}
void maximum (int a, int b)
{
	//enter the number and find their maximum
	cout<<"Enter two numbers"<<endl;
	cin>>a;
	cin>>b;
	if(a>b)
	{
		cout<< "The maximum no. is "<<a<<endl;
	}
	else
	cout<< "The maximum no. is "<<b<<endl;
}
void minimum (int a, int b)
{
	//enter the number and find their minimum
	cout<<"Enter two numbers"<<endl;
	cin>>a;
	cin>>b;
	if(a>b)
	{
		cout<< "The minimum no. is "<<b<<endl;
	}
	else
	cout<< "the minimum no. is "<<a<<endl;
}
// main function
int main(){
	int a,b,c;
	cout<< "Choose 1 for sum, 2 for finding maximum, any positive integer (except 1 and 2) for finding minimum"<<endl; 
	cin>>c;
	if(c==1)
	{
		sum (a,b);
	}
	else if(c==2)
	{
		maximum (a,b);
	}
	else
	minimum (a,b);
	//end	
	return 0;
}
