//include library

#include <iostream>

using namespace std;

//function to take two parameters and finds the maximum
void maximum (int& a, int& b)
{
	cout<<"Enter two numbers"<<endl;
	cin>>a>>b;
	int maximum;
	if(a>b)
	{
		cout<< "The maximum number is "<<a<<endl;
	}
	else
	cout<< "The maximum number is "<<b<<endl;
}
// main function
int main()
{
	int a,b;
	maximum(a,b);
	//end
	return 0;
}
