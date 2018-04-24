#include <stdio.h>
#include <iostream>
using namespace std;

int main()
{
	int t,n,temp,k;
	scanf("%d",&t);
	for(int i=1;i<=t;i++)
	{
		temp=0;
		scanf("%d",&n);
		k=n;
		while(k>0)
		{
			temp=temp*10+k%10;
			k=k/10;
		}
		if(temp==n)
			cout<<"Case "<<i<<": Yes\n";
		else
			cout<<"Case "<<i<<": No\n";
	}
}