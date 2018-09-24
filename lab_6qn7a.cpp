//include library

#include <iostream>

using namespace std;
//creating a user defined function to ask for a lower case character
int upperCase(char x)
{
	char ch;
	cout<<"Enter a character in lowercase: "<< endl; 
	cin>>ch;
	ch=ch-32;
	cout<<"Upper case of the entered character is: "<<ch<<endl;
	return ch;
}
//main function
int main()
{
	char x;
	upperCase(x);
	return 0;
}
