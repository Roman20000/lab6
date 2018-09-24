//include library

#include <iostream>

using namespace std;

//function to take two parameters and finds the minimum
void minimum (int& a, int& b)
{
	cout<<"Enter two numbers"<<endl;
	cin>>a>>b;
	int minimum;
	if(a>b)
	{
		cout<< "The minimum no. is "<<b<<endl;
	}
	else
	cout<< "The minimum no. is "<<a<<endl;
}

// main function
int main()
{
	int a,b;
	minimum(a,b);
	//end
	return 0;
}
