//include library

#include <iostream>

using namespace std;
//creating a user defined function to ask for a upper case character
int lowerCase(char a)
{
	char ch;
	cout<<"Enter a character in upper case: "<< endl; 
	cin>>ch;
	ch=ch+32;
	cout<<"Lower case of the entered character is: "<<ch<<endl;
	return ch;
}
//main function
int main()
{
	char a;
	lowerCase(a);
	return 0;
}
