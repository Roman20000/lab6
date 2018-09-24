//include library

#include <iostream>

using namespace std;

//function to take two parameters and returns the minimum
int minimum (int a, int b)
{
	cout<<"Enter two numbers"<<endl;
	cin>>a>>b;
	if(a>b)
	{
		cout<< "The minimum niumber is "<<b<<endl;
	}
	else
	cout<< "The minimum number is "<<a<<endl;
	return 0;
}
// main function
int main()
{
	int a,b;
	minimum(a,b);
	//end	
	return 0;
}
