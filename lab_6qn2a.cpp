//include library

#include <iostream>

using namespace std;

//function to take two numbers and return the sum
int sum (int a, int b)
{
	cout<<"Enter two numbers "<<endl;
	cin>> a >> b;
	int sum;
	sum=a+b;
	cout<<"Their sum is "<< sum <<endl;
	return sum;
}
// main function
int main()
{
	int a,b;
	sum(a,b);
	//end
	return 0;
}
