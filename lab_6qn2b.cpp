//include library

#include <iostream>

using namespace std;

//function to ask user and sum the numbers
void sum (int& a, int& b)
{
	cout<<"Enter two numbers"<<endl;
	cin>>a>>b;
	int sum;
	sum=a+b;
	cout<<"Their sum is "<< sum <<endl;
}

// main function
int main()
{
	int a,b;
	sum(a,b);
	//end
	return 0;
}
