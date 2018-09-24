//include library

#include <iostream>

using namespace std;
//creating user defined function to ask for first and last numbers
int sumofsquareofoddnumbers(int a, int b)
{
	cout<<"Enter the 1st odd integer"<<endl;
	cin>>a;
	cout<<"Enter the last odd integer"<<endl;
	cin>>b;
	int sum;
	int i=a+1;
	while (i<b ) 
	{ 
		//using while loop to find sum
		if(i%2 !=0)
		{
			sum=sum+(i*i);
			
		}
		i++;
	}
	cout<<"Their sum is "<< sum <<endl;
	return sum;
}
//main function
int main(){
	int a,b;
	sumofsquareofoddnumbers(a,b);
	//end	
	return 0;
}
