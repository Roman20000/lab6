//include library

#include <iostream>

using namespace std;
char toUpper(char leTter)
{
	int i;
	i=int(leTter);
	return (char(i-32));
}

/*
Write a user-defined function toLower() that returns the lowercase of the inputChar received. Use call-by-value.
*/
char toLower(char leTter)
{
	int i;
	i=int(leTter);
	return (char(i+32));
}
/*
Write a main program, that calls the above function based on the input of the user. 
 If the user enters a lower case character, it should automatically detect it and call toUpper() 
 and display the upper case value and vice-versa.
*/

/*
Write a main program
*/
int main()
{
	char leTter;
	int i;
	//input of the user.
	cout<<"Give a letter "<<endl;
	cin>>leTter;
	i=int(leTter);
	/*
	If the user enters a lower case character, it should automatically detect it and call toUpper() 
 	and display the upper case value 
	*/
	if(i>=97&&i<=122)
	{
		cout<<"the upper case is "<<toUpper(leTter)<<endl;
	}
	/*
	If the user enters a upper case character, it should automatically detect it and call toLower() 
 	and display the lower case value
	*/
	else if(i>=65&&i<=90)
	{
		cout<<"the lower case is "<<toLower(leTter)<<endl;
	}
	else
	{
		cout<<"ERROR"<<endl;
	}
	return 0;
}

