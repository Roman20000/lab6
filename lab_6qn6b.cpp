//include library

#include <iostream>

using namespace std;
//creating user defined function to ask for first and last numbers
int sumofoddnumbers(int a, int b)
{
	cout<<"Enter the 1st odd integer"<<endl;
	cin>>a;
	cout<<"Enter the last odd integer"<<endl;
	cin>>b;
	int sum;
	for (int i=a+1; i<b ; i++) 
	{ 
		//using loop to find sum
		if(i%2 !=0)
		{
			sum=sum+i;
		}
	}
	cout<<"The sum is "<< sum <<endl;
	return sum;
}
//main function
int main()
{
	int a,b;
	sumofoddnumbers(a,b);
	//end	
	return 0;
}
