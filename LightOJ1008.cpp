#include <iostream>
#include <cmath>
using namespace std;
int main(){
	long long number,x,y;
	int testCase,position,counter=0;
	cin>>testCase;
	while(testCase<=200&&testCase>0)
	{
		cin>>number;
		long long n=ceil(sqrt(number));
		position=number-((n-1)*(n-1));
		if(n%2==0)
		{
			if(position>n)
			{
				x=n;
				y=(2*n)-position;
			}	
			else
			{
				x=position;
				y=n;
			}
		}
		else
		{
			if(position>n)
			{
				x=(2*n)-position;
				y=n;
			}
			else
			{
				x=n;
				y=position;
			}

		}
		counter++;
		cout<<"Case "<<counter<<": "<<x<<" "<<y<<"\n";
		testCase--;
	}
}