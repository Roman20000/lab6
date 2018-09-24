//include library

#include <iostream>

using namespace std;

//function that obtains data from user and returns a value for unitcst,units and taxRt
void func1(int& u, int& c, int& r)
{
	cout <<"Enter the value for units"<<endl;
	cin>> u;
	cout <<"Enter the value for unit cost"<<endl;
	cin>>c;
	cout <<"Enter the value for tax rate"<<endl;
	cin>>r;	
}

//function to recieve values for u,c,r and calculate sales tax and total due
void func2(int u, int c, int r, int& st, int& totdue)
{
	//calculating sales tax(st) and total due(totdue)
	st =u*c*r;
	totdue = st + (c*u);
}

void func3(int u, int c, int r, int st, int totdue)
{
	cout <<"Units "<<u<<endl;
	cout <<"Unit costs "<<c<<endl;
	cout <<"Tax rate "<<r<<endl;
	cout <<"Sales tax "<<st<<endl;
	cout <<"Total due is "<<totdue<<endl;
}

//main function
int main()
{
	int u,c,r,st,totdue;
	func1(u,c,r);
	func2(u,c,r,st,totdue);
	func3(u,c,r,st,totdue);

	//end
	return 0;

}
