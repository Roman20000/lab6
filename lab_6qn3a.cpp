//include library

#include <iostream>

using namespace std;

//function to take two int parameters and return the maximum
int maximum (int a, int b)
{
	cout<<"Enter two numbers"<<endl;
	cin>>a>>b;
	if(a>b)
	{
		cout<< "The maximum number is "<<a<<endl;
	}
	else
	cout<< "The maximum number is "<<b<<endl;
	return 0 ;
}

// main function
int main()
{
	int a,b;
	maximum(a,b);
	//end
	return 0;
}
