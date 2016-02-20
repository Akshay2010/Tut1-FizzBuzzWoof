#include<stdio.h>
#include<iostream>

using namespace std;

int main()
{

	
	int i=1;
	bool status=0;

	for(;i<=20;i++)
	{
		if((i%3 == 0) && ((i%5)==0))
		{
			cout<<"Fizzbuzz"<<endl;
			bool status =1;
		}

		if((i%3 == 0) && status==0)
		{
			cout<<"Fizz"<<endl;
			status=1;
		}

		if((i%5 == 0) && status==0)
		{
			cout<<"buzz"<<endl;
			status=1;
		};

		if(status==0)
			cout<<i<<endl;
		
		
		status=0;
	}

	system("PAUSE");
	return 0;

}