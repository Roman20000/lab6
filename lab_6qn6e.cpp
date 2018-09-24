//include library

#include <iostream>

using namespace std;
//creating user defined function to ask for first and last numbers
void sumSquareEven(int a, int b)
{
	int sum1;
	int i=a+1;
	while (i<b ) 
	{ 
		//using while loop to find sum
		if(i%2 ==0)
		{
			sum1=sum1+(i*i);
			
		}
		i++;
	}
	cout<<"The sum of square of even numbers between the two numbers is "<< sum1 <<endl;
}
void sumSquareOdd(int a, int b){
	cin>>a;
	cin>>b;
	int sum2;
	int i=a+1;
	while (i<b ) 
	{ 
		//using while loop to find sum
		if(i%2 !=0)
		{
			sum2=sum2+(i*i);
			
		}
		i++;
	}
	cout<<"The sum of square of odd numbers between the two numbers is "<< sum2 <<endl;
}
void sumOdd(int a, int b)
{
	int sum3;
	cin>>a;
	cin>>b;
	for (int i=a+1; i<b ; i++) 
	{  
		//using loop to find sum
		if(i%2 !=0)
		{
			sum3=sum3+i;
		}		}
		cout<<"The sum of odd numbers between the two numbers is "<< sum3 <<endl;
	}
void sumEven(int a, int b)
{
	int sum4;
	cin>>a;
	cin>>b;
	for (int i=a+1; i<b ; i++) 
	{ 
		//using loop to find sum
		if(i%2==0)
		{
			sum4=sum4+i;
		}
	}
	cout<<"The sum of even numbers between the two numbers is "<< sum4 <<endl;
}
//main function
int main()
{
	int a,b;
	cout<<"Enter the smaller integer"<<endl;
	cin>>a;
	cout<<"Enter the larger integer"<<endl;
	cin>>b;
	sumSquareEven(a,b);
	sumSquareOdd(a,b);
	sumOdd(a,b);
	sumEven(a,b);
	return 0;
}
