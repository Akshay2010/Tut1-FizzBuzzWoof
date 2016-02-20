#include<iostream>
#include<stdio.h>

using namespace std;


int main()
{
	int i=1;
	int status=0;

for(i=1;i<=50;i++)
	{
			if((i%3 == 0) && ((i%5)==0) && ((i%7)==0))
			{
				cout<<"FizzBuzzWoof"<<endl;
				status=1;
			}

			if(((i%3 == 0) && ((i%5)==0))&& status==0)
			{
				cout<<"Fizzbuzz"<<endl;
				status=1;
			}

			if(((i%3 == 0) && ((i%7)==0))&& status==0)
			{
				cout<<"FizzWoof"<<endl;
				status=1;
			}

			if(((i%3 == 0) && ((i%5)==0))&& status==0)
			{
				cout<<"buzzwoof"<<endl;
				status=1;
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

		if((i%7 == 0) && status==0)
		{
			cout<<"woof"<<endl;
			status=1;
		};


		if(status==0)
			cout<<i<<endl;
			
		status=0;
	}
	system("PAUSE");

return 0;

}